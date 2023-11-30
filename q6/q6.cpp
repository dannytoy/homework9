// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 6

#include <iostream>

using namespace std;

int matches(string main, string sub)
{
    int matches = 0;
    int len = main.length();
    for(int i = 0; i < len; i++)
    {
        int len2 = len - i;
        for(int j = len2; j > 0; j--)
        {
            if(main.substr(i, j) == sub)
            {
                matches++;
            }
        }
    }
    return matches;
}

int main()
{
    string main;
    string sub;
    cout << "Enter the search string: " << endl;
    getline(cin, main);
    cout << "Enter the substring to be searched: " << endl;
    getline(cin, sub);
    cout << "Number of occurrences: " << matches(main, sub) << endl;
    return 0;
}