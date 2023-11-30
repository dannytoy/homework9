// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 5

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int n;
    cout << "Enter a positive integer:" << endl;
    cin >> n;
    if(n < 1)
    {
        cout << "Invalid input." << endl;
        return 1;
    }
    cout << n << endl;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = floor(sqrt(n));
            cout << n << endl;
        }
        else
        {
            n = floor((pow(sqrt(n), 3)));
            cout << n << endl;
        }
    }
    return 0;
}

