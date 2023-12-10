// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 15

#include "User.h"
#include <fstream>
#include <sstream>

using namespace std;

int readRatings(string fileName, User users[], int num_users_stored, int users_arr_size, int max_ratings)
{
    int users_in_system = num_users_stored;

    if(num_users_stored == users_arr_size)
    {
        return -2;
    }
    ifstream fin;
    fin.open(fileName);
    int index_to_start = num_users_stored;
    if(fin.fail())
    {
        for(int i = num_users_stored; i < users_arr_size; i++)
        {
            users[i] = User();
        }
        return -1;
    }

    int user_looper = num_users_stored;
    while(!fin.eof() || user_looper < users_arr_size)
    {
        int number_of_ratings = 0;
        string line;
        string temp;
        User temp_user = User();
        getline(fin, line);
        if(line == "")
        {
            continue;
        }
        else
        {
            int len = line.size();
            for(int i = 0; i < len; i++)
            {
                if(line.at(i) == ',')
                {
                    number_of_ratings++;
                }
            }
            temp_user.setNumRatings(number_of_ratings);
        }
        stringstream ss(line);
        getline(ss, temp, ',');
        temp_user.setUsername(temp);
        for(int i = 0; i < temp_user.getNumRatings(); i++)
        {
            getline(ss, temp, ',');
            temp_user.setRatingAt(i, stoi(temp));
        }
        getline(ss, temp);
        temp_user.setRatingAt(temp_user.getNumRatings() + 1, stoi(temp));
        users[user_looper] = temp_user;
        user_looper++;
        users_in_system++;
    }
    return users_in_system;
}