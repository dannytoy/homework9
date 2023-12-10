// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 10

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

int insertConsonants(char input_characters[], int num_elements, int ARR_SIZE, int num_consonants)
{
    int new_num_elements = num_elements;
    if(num_consonants + num_elements > ARR_SIZE)
    {
        return num_elements;
    }
    else
    {
        for(int i = 0; i < (num_elements + num_consonants); i++)
        {
            if(isupper(input_characters[i]))
            {
                continue;
            }
            else if(input_characters[i] != 'a' && input_characters[i] != 'e' && input_characters[i] != 'i' && input_characters[i] != 'o' && input_characters[i] != 'u')
            {
                char char_to_insert = input_characters[i] - 32;
                insertAfter(input_characters, new_num_elements, ARR_SIZE, i, char_to_insert);
                new_num_elements++;
            }
        }
        return new_num_elements;
    }
}

int main()
{
    /* const int ARR_SIZE = 5;
    char input_characters[ARR_SIZE] = "cat";
    int num_elements = 3;
    int num_consonants = 2;
    // updating num_elements with the updated value returned by insertConsonants
    num_elements = insertConsonants(input_characters, num_elements, ARR_SIZE, num_consonants);
    // print num_elements
    cout << "Function returned value: " << num_elements << endl;
    // print array contents
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << input_characters[i];
    }  */

    /* const int ARR_SIZE = 12;
    char input_characters[ARR_SIZE] = "boulder";
    int num_elements = 7;
    int num_consonants = 4;
    // updating num_elements with the updated value returned by insertConsonants
    num_elements = insertConsonants(input_characters, num_elements, ARR_SIZE, num_consonants);
    // print num_elements
    cout << "Function returned value: " << num_elements << endl;
    // print array contents
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << input_characters[i];
    }  */

    const int ARR_SIZE = 9;
    char input_characters[ARR_SIZE] = "apples";
    int num_elements = 6;
    int num_consonants = 4;
    // updating num_elements with the updated value returned by insertConsonants
    num_elements = insertConsonants(input_characters, num_elements, ARR_SIZE, num_consonants);
    // print num_elements
    cout << "Function returned value: " << num_elements << endl;
    // print array contents
    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << input_characters[i];
    } 

    return 0;
}