// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 13

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int readData(string filename, string drivers[], int attributes[][3], int ARR_SIZE, int splits)
{
    ifstream fin;
    fin.open(filename);
    if(fin.fail())
    {
        cout << "Could not open file." << endl;
        return -1;
    }
    int row = 0;
    int num_drivers = 0;
    while(!fin.eof() && row < ARR_SIZE)
    {
        int split_checker = 0;
        string line;
        string temp;
        getline(fin, line);
        int size = line.size();
        for(int i = 0; i < size; i++)
        {
            if(line.at(i) == ',')
            {
                split_checker++;
            }
        }
        if(split_checker != (splits - 1))
        {
            continue;
        }
        stringstream ss(line);
        getline(ss, temp, ',');
        drivers[row] = temp;
        getline(ss, temp, ',');
        attributes[row][0] = stoi(temp);
        getline(ss, temp, ',');
        attributes[row][1] = stoi(temp);
        getline(ss, temp);
        attributes[row][2] = stoi(temp);
        num_drivers++;
        row++;
    }
    return num_drivers;
}

void calcOverallScore(string drivers[], int attributes[][3], int num_drivers, int num_atts)
{
    
    for(int i = 0; i < num_drivers; i++)
    {
        double score = 0;
        for(int j = 0; j < num_atts; j++)
        {
            score += (attributes[i][j]);
        }
        double average_score = score/num_atts;
        cout << fixed << setprecision(1) << drivers[i] << " overall score: " << average_score << "." << endl;
    }
}

int main()
{
    string filename = "game_samples.txt";
    // max number of splits
    int splits = 4;
    // number of drivers
    const int ARR_SIZE = 3;
    // number of attributes
    int num_atts = 3;
    // call read data function
    string drivers[ARR_SIZE];
    int attributes[ARR_SIZE][3];
    int num_drivers = readData(filename, drivers, attributes, ARR_SIZE, splits);
    if (num_drivers != -1)
    {
        calcOverallScore(drivers, attributes, num_drivers, num_atts);
    }

    return 0;
}