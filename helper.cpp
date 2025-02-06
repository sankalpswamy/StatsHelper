#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> data; // store the data read from file

// this reads the input file into the vector
void readData()
{
    int num;
    ifstream fin("data.txt", ios::in);
    while (fin >> num)
    { // pushes variable into vector
        data.push_back(num);
    }
    sort(data.begin(), data.end()); // sorts the vector
}

void printVector(vector<int> V) // prints the vector neatly
{
    cout << "Data Values: ";
    for (int num : V)
    {
        cout << num << " ";
    }
    cout << endl;
}

int findMin(vector<int> V) // finds min element in vector
{
    int min = *min_element(V.begin(), V.end());
    return min;
}

int findMax(vector<int> V) // finds max element in vector
{
    int max = *max_element(V.begin(), V.end());
    return max;
}

int findRange(vector<int> V) // finds range of elements in vector
{
    int range = findMax(V) - findMin(V);
    return range;
}

void findMode(vector<int> V) // finds mode of elements in vector
{
    int mode = -1;
    int count = 1;
    int tmp = 1;
    for (int i = 1; i < V.size(); i++)
    {
        if (V[i] == V[i - 1])
        {
            tmp++;
        }
        else
        {
            if (tmp > count)
            {
                count = tmp;
                mode = V[i - 1];
            }
            tmp = 1;
        }
    }
    cout << "Mode: ";
    if (count > 1)
    {
        cout << mode << ", repeated " << count << " times." << endl;
    }
    else
    {
        cout << "none." << endl;
    }
}

double findAverage(vector<int> V) // finds average of elements in vector
{
    double avg = 0;
    for (int i = 0; i < V.size(); i++)
    {
        avg += V[i];
    }
    avg /= V.size();
    return avg;
}

double populationStdDev(vector<int> V) // finds population std dev
{
    double stdDev = 0;
    double avg = findAverage(V);
    for (int num : V)
    {
        stdDev += (pow((num - avg), 2) / V.size());
    }
    return sqrt(stdDev);
}

double sampleStdDev(vector<int> V) // find sample std dev
{
    double stdDev = 0;
    double avg = findAverage(V);
    for (int num : V)
    {
        stdDev += (pow((num - avg), 2) / (V.size() - 1));
    }
    return sqrt(stdDev);
}

double findZScore(vector<int> V) //allows user to input value and find Z-Score
{
    int num;
    cout << "Enter a number in data set to find Z score: ";
    cin >> num;
    auto elem = find(V.begin(), V.end(), num);
    if(elem != V.end())
    {
        if(populationStdDev(V) != 0)
            return ((num - findAverage(V))/populationStdDev(V));
        else 
        {
            cout << "Error: Standard deviation is 0, unable to compute" << endl;
            return NAN;
        }
    }
    else{
        cout << "Number is not in data set." << endl;
        return NAN;
    }
}

int main()
{
    readData();
    int selection; // this will indicate what the user wants to do

    do
    {
        cout << endl << "MENU: These are your options: " << endl << endl;
        cout << "   (1) See data values" << endl;
        cout << "   (2) See data information" << endl;
        cout << "   (3) Standard deviations" << endl;
        cout << "   (4) Get Z score of number" << endl;
        cout << "   (0) Exit program" << endl;
        cout << "    ===>  ";
        cin >> selection;
        cout << endl;

        switch (selection)
        {

        case 1: // print vector
            printVector(data);
            break;

        case 2: // display information
            cout << "Min Value: " << findMin(data) << endl;
            cout << "Max Value: " << findMax(data) << endl;
            cout << "Range: " << findRange(data) << endl;
            findMode(data);
            cout << "Average: " << findAverage(data) << endl;
            break;

        case 3: // standard deviations
            cout << "Population Standard Deviation: " << populationStdDev(data) << endl;
            cout << "Sample Standard Deviation: " << sampleStdDev(data) << endl;
            break;

        case 4: // find z score
            cout << "Z Score: " << findZScore(data) << endl;
            break;

        } // end of switch statement

    } while (selection != 0);
}
