# College Statistics Helper

## Overview
The **College Statistics Helper** is a simple web-based tool designed to assist students with statistical calculations and visualizations. It provides functions to analyze data, generate descriptive statistics, compute standard deviations and z-scores, and visualize data using a box plot.

This tool was designed specifically for **MATH242 at CSUSM** and is useful for students studying statistics.

## Features
- Load numerical data from a text file or manual input.
- Display raw data values in sorted order.
- Compute descriptive statistics such as minimum, maximum, range, mean, and mode.
- Calculate **Population Standard Deviation** and **Sample Standard Deviation**.
- Determine the **Z-Score** of any value in the dataset.
- Visualize the dataset with a **Box Plot**.
- View **quartile information (Q1, Median, Q3)** by hovering over the box plot.

## Usage Instructions

### 1. Load Data
- **From a File**: Click the `Load from file` button and upload a text file containing numbers separated by spaces.
- **Manual Entry**: Enter numbers in the provided text box and click `Load from Input`.

### 2. View Data and Statistics
- Click `See Data Values` to display the sorted dataset.
- Click `See Data Information` to compute min, max, range, mode, and average.
- Click `Standard Deviations` to compute population and sample standard deviations.
- Click `Get Z-Score` to enter a value and compute its z-score.

### 3. Box Plot Visualization
- A **box plot** is automatically generated after data is loaded.
- Hover over the box plot to see **quartile values (Q1, Median, Q3)**, as well as **min, max, and outliers**.

## Dependencies
This tool uses **Chart.js** and **chartjs-chart-boxplot** for visualization:
- [Chart.js](https://www.chartjs.org/)
- [Chart.js Box Plot Plugin](https://github.com/sgratzl/chartjs-chart-boxplot)

## Notes
- Ensure that your dataset contains **only numbers**.
- The application assumes data is separated by spaces.
- The box plot dynamically updates when new data is loaded.

## Author
Developed by **Sankalp Swamy** for **MATH242 at CSUSM**.

