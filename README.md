# StatsHelper
Program that can help calculate many basic operationns used in for Math 242 at CSUSM

This program is designed to help students in Math242 (Statistics) at California State University, San Marcos. This html program provides basic data analysis operations for a set of numbers read from an input file. The program allows the user to:

    View the raw data.
    Calculate the minimum, maximum, range, and average.
    Determine the mode of the data.
    Calculate population and sample standard deviations.
    Compute the Z-score for a specific number within the dataset.

The program sorts the data in ascending order and provides a menu-driven interface to interact with various options. It utilizes basic statistical formulas and functions to generate insights into the provided data.
Features:

    Data Input and Sorting: Reads data from a file (data.txt) and sorts it in ascending order.
    Basic Descriptive Statistics: Calculates and displays the minimum, maximum, range, and average of the dataset.
    Mode Calculation: Finds and displays the mode of the dataset, including the frequency of its occurrence.
    Standard Deviation: Calculates both the population and sample standard deviations based on the provided data.
    Z-Score Calculation: Allows the user to input a number from the dataset and calculates the Z-score based on the population standard deviation.

Dependencies:

This program requires the C++ Standard Library, including:

    <iostream>: for input/output operations.
    <fstream>: for file reading operations.
    <vector>: for storing and manipulating data.
    <algorithm>: for sorting and finding the minimum/maximum values.
    <cmath>: for mathematical operations like square root and power.

How to Compile and Run:

    C++:
        Make sure you have a C++ compiler installed (e.g., GCC or MinGW).

        Create a file named data.txt in the same directory where the program will be compiled. This file should contain a set of integers (space-separated or newline-separated), which the program will read and process.

        Compile the code: If you're using GCC, use the following command to compile the program:

    g++ helper.cpp

    Run the executable: Once compiled, you can run the program with:

        ./a.out
        
    HTML:
        Download helper.html, open the file in a browser of you choosing.

Menu Options:

Upon running the program, the user is presented with the following menu:

    See Data Values: Displays the sorted data values.
    See Data Information:
        Shows the minimum, maximum, range, mode, and average of the dataset.
    Standard Deviations:
        Displays both the population and sample standard deviations.
    Get Z-Score of Number:
        Prompts the user to enter a number from the dataset and calculates its Z-score.
    Exit Program: Exits the program.

Functionality Breakdown:

    readData():
        Reads the data from data.txt and sorts it in ascending order.

    printVector(vector<int> V):
        Prints all the elements in the vector.

    findMin(vector<int> V):
        Returns the minimum value from the vector.

    findMax(vector<int> V):
        Returns the maximum value from the vector.

    findRange(vector<int> V):
        Computes the range of the dataset (maximum - minimum).

    findMode(vector<int> V):
        Finds the mode of the dataset and displays how many times it repeats.

    findAverage(vector<int> V):
        Calculates the average (mean) of the data.

    populationStdDev(vector<int> V):
        Calculates the population standard deviation.

    sampleStdDev(vector<int> V):
        Calculates the sample standard deviation.

    findZScore(vector<int> V):
        Prompts the user to input a number from the dataset and computes the Z-score for that number.

Example Output:

MENU: These are your options:

   (1) See data values
   (2) See data information
   (3) Standard deviations
   (4) Get Z score of number
   (0) Exit program
===> 1

Data Values: 10 20 30 40 50 60 

Notes:

    Ensure the data.txt file is properly formatted with numbers separated by spaces or newlines.
    The program assumes that the dataset is numeric and will not handle non-numeric input gracefully.
    If the standard deviation is zero, the Z-score cannot be calculated, and an error message will be displayed.
    The program checks if the user input number exists in the dataset before attempting to calculate the Z-score.

Future Enhancements:

    Handle edge cases, such as empty datasets or non-numeric data.
    Improve the mode calculation to handle multimodal datasets (multiple values with the same frequency).
    Allow the user to input a custom dataset instead of reading from a file.
