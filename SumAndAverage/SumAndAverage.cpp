// SumAndAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Connor Swanson
// Activision Blizzard
// 7/19/2022

#include <iostream>
using namespace std;

int calculateSum(int n1, int n2, int n3);
double calculateAvg(int total);

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
    int sum = calculateSum(x, y, z);

    // Calculate the average of the three numbers
    double avg = calculateAvg(sum);

    // Show the user the data
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

int calculateSum(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}

double calculateAvg(int total)
{
    return (double)total / 3.0;
}