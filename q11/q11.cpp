// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 11

#include <iostream>

using namespace std;

void floodMap(double map[][4], int rows, double water_level)
{
    int cols = 4;
    if(rows != 0)
    {
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(map[i][j] <= water_level)
                {
                    cout << "*";
                }
                else
                {
                    cout << "_";
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    /* double map[4][4] = {{5.9064, 15.7541, 6.11483, 11.3928}, 
		{16.8498, 5.736, 9.33342, 6.36095}, 
		{3.18645, 16.935, 4.7506, 9.63635}, 
		{2.22407, 0.815145, 0.298158, 13.466}};
    floodMap(map, 4, 9.3); */

    double map[4][4] = {{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15}};
    floodMap(map, 4, 5.5);

    return 0;
}