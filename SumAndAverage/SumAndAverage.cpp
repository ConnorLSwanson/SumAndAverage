// SumAndAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Connor Swanson
// Activision Blizzard
// 7/19/2022

#include <iostream>
using namespace std;

int main()
{
    // Prompt user for three numbers
    cout << "Please enter three numbers: " << endl;

    // Take input for the three numbers
    int x = 0, y = 0, z = 0;
    cin >> x;
    cin >> y;
    cin >> z;

    // Calculate the sum of the three numbers
    int sum = 0;
    sum = x + y + x;

    // Calculate the average of the three numbers
    double avg = 0;
    avg = sum / 3.0;

    // Show the user the data
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

