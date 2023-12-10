// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 14

#include "User.h"

User::User()
{
    _username = "";
    _num_ratings = 0;
    for(int i = 0; i < _MAX_SIZE; i++)
    {
        _ratings[i] = 0;
    }
}
User::User(string username, int ratings[], int num_ratings)
{
    _username = username;
    _num_ratings = num_ratings;
    for(int i = 0; i < num_ratings; i++)
    {
        _ratings[i] = ratings[i];
    }
    for(int i = num_ratings; i < _MAX_SIZE; i++)
    {
        _ratings[i] = 0;
    }
}

string User::getUsername()
{
    return _username;
}
void User::setUsername(string username)
{
    _username = username;
}

int User::getRatingAt(int index)
{
    if(index >= _MAX_SIZE || index < 0)
    {
        return -1;
    }
    return _ratings[index];
}
bool User::setRatingAt(int index, int value)
{
    if(index >= _MAX_SIZE || index < 0 || value < 0 || value > 5)
    {
        return false;
    }
    _ratings[index] = value;
    return true;
}

int User::getNumRatings()
{
    return _num_ratings;
}
void User::setNumRatings(int num_ratings)
{
    _num_ratings = num_ratings;
}

int User::getSize()
{
    return _MAX_SIZE;
}