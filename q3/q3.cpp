// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 3

#include <iostream>

using namespace std;

double passTypeConversion(char pass_type)
{
    if(pass_type == 'S')
    {
        return 35.5;
    }
    else if(pass_type == 'P')
    {
        return 75.25;
    }
    else if(pass_type == 'V')
    {
        return 150.75;
    }
    else
    {
        return 200.5;
    }
}

string passTypeConversionName(char pass_type)
{
    if(pass_type == 'S')
    {
        return "Student";
    }
    else if(pass_type == 'P')
    {
        return "Professional";
    }
    else if(pass_type == 'V')
    {
        return "VIP";
    }
    else
    {
        return "Speaker";
    }
}

int main()
{
    char pass_type;
    int workshop;
    double budget; 
    double total;

    cout << "Enter the desired pass type (S for Student, P for Professional, V for VIP, K for Speaker): " << endl;
    cin >> pass_type;
    if(pass_type != 'S' && pass_type != 'P' && pass_type != 'V' && pass_type != 'K')
    {
        cout << "Please enter valid input." << endl;
        return 1;
    }

    cout << "Enter the number of workshop add-ons: " << endl;
    cin >> workshop;
    if(workshop < 0)
    {
        cout << "Please enter a non-negative number of workshops." << endl;
        return 1;
    }

    cout << "Enter your budget: $" << endl;
    cin >> budget;

    total = (workshop * 50) + passTypeConversion(pass_type);

    if(total > budget)
    {
        cout << "Pass purchase failed. Insufficient funds." << endl;
    }
    else
    {
        cout << "Pass purchase successful! Pass type: " << passTypeConversionName(pass_type) << ", Workshops: " << workshop << ", Total cost: $" << total << ", Remaining budget: $"
        << (budget - total) << endl;
    }

    return 0;
}