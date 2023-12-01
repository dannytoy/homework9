// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 8

#include <iostream>
#include <vector>

using namespace std;

vector<int> changeVector(int num, vector<int> vec)
{
    if(vec.empty())
    {
        vec.push_back(num);
        return vec;
    }
    if(num % 5 == 0)
    {
        int size = vec.size();
        for(int i = 0; i < size - 1; i++)
        {
            vec.at(i) = vec.at(i + 1);
        }
        vec.pop_back();
    }
    if(num % 3 == 0)
    {
        vec.pop_back();
    }
    if(num % 3 != 0 && num % 5 != 0)
    {
        vec.push_back(num);
    }
    return vec;
}

int main()
{
    int num = 0;
    vector<int> vec;
    while(num != -1)
    {
        cout << "Please enter a number: " << endl;
        cin >> num;
        if(num < 1 && num != -1)
        {
            cout << "The number should be a positive integer or -1." << endl;
        }
        else if(num == -1)
        {
            break;
        }
        else
        {
            vec = changeVector(num, vec);
        }
    }
    if(vec.empty())
    {
        cout << "The vector is empty." << endl;
    }
    else
    {
        cout << "The elements in the vector are:";
        int size = vec.size();
        int min = vec.at(0);
        int max = vec.at(0);
        for(int i = 0; i < size; i++)
        {
            cout << " " << vec.at(i);
            if(vec.at(i) > max)
            {
                max = vec.at(i);
            }
            if(vec.at(i) < min)
            {
                min = vec.at(i);
            }
        }
        cout << endl;
        cout << "Min = " << min << endl;
        cout << "Max = " << max << endl;
    }
    return 0;
}