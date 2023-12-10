// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 14

#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User
{
    public:
    User();
    User(string, int[], int);

    string getUsername();
    void setUsername(string);

    int getRatingAt(int);
    bool setRatingAt(int, int);

    int getNumRatings();
    void setNumRatings(int);

    int getSize();

    private:
    string _username;
    const static int _MAX_SIZE = 50;
    int _ratings[_MAX_SIZE];
    int _num_ratings;
};

#endif