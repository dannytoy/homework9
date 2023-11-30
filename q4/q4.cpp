// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 4

#include <iostream>
#include <iomanip>

using namespace std;

double calcPrice(int ducks)
{
    if(ducks > 20 && ducks <= 100)
    {
        return ducks*0.5*0.9;
    }
    else if(ducks > 100 && ducks <= 500)
    {
        return ducks*0.5*0.8;
    }
    else if(ducks > 500)
    {
        return ducks*0.5*0.5;
    }
    else
    {
        return ducks*0.5;
    }
}

int main()
{
    int ducks;
    cout << "How many ducks would you like to order?" << endl;
    cin >> ducks;
    if(ducks < 0)
    {
        cout << "Please enter a valid input." << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << "Your total is $" << calcPrice(ducks) << endl;
    }

    return 0;
}