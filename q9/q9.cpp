// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 9

#include <iostream>

using namespace std; 

bool insertAfter(char input_characters[], int num_elements, int ARR_SIZE, int index, char char_to_insert)
{
    if(num_elements == ARR_SIZE || index >= ARR_SIZE || index < 0 || index == num_elements)
    {
        return 0;
    }
    else
    {
        for(int i = num_elements; i > index + 1; i--)
        {
            input_characters[i] = input_characters[i-1];
        }
        input_characters[index + 1] = char_to_insert;
        return 1;
    }
}

int main()
{
    /* const int ARR_SIZE = 5;
    char input_characters[ARR_SIZE] = "cat";
    int num_elements = 3;
    int index = 2;
    char char_to_insert = 's';
    // result contains the value returned by insertAfter
    bool result = insertAfter(input_characters, num_elements, ARR_SIZE, index, char_to_insert);
    // print result
    cout << "Function returned value: "<< result << endl;
    // print array contents
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << input_characters[i];
    } */

    const int ARR_SIZE = 5;
    char input_characters[ARR_SIZE] = "Boo";
    int num_elements = 3;
    int index = 0;
    char char_to_insert = 'l';
    // result contains the value returned by insertAfter
    bool result = insertAfter(input_characters, num_elements, ARR_SIZE, index, char_to_insert);
    // print result
    cout << "Function returned value: "<< result << endl;
    // print array contents
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << input_characters[i];
    }

    return 0;
}
