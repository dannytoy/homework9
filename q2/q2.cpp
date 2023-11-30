// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 2

#include <iostream>
#include <cmath>

using namespace std;

double calculateSigmoid(double x)
{
    return (1/(1+(exp(-x))));
}

int main()
{
    double x;
    cout << "Enter a value for x:" << endl;
    cin >> x;
    cout << "The sigmoid for x=" << x << " is " << calculateSigmoid(x) << endl;
    return 0;
}