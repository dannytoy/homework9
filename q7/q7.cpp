// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 7

#include <iostream>

using namespace std;

int main()
{
    int height;
    char letter = 97; // a = 97, z = 122
    int level = 0;
    cout << "Enter the height:" << endl;
    cin >> height;
    if(height < 1)
    {
        cout << "Invalid input." << endl;
    }
    else
    {
        for(int i = 0; i < height; i++)
        {
            for(int i = 0; i < (height - level); i++)
            {
                cout << letter;
                letter++;
                if(letter == 123)
                {
                    letter = 97;
                }
            }
            cout << endl;
            level++;
        }
    }

    return 0;
}
