// CSCI 1300 Fall 2023
// Author: Danny Toy
// TA: Nick Cooper
// Question 1

#include <iostream>

using namespace std;

int main()
{
    int core = 0;
    int cosmic = 0;
    int astral = 0;
    int celestial = 0;
    int quantum = 0;
    cout << "Enter the number of Element Core particles: " << endl;
    cin >> core;
    if(core < 0)
    {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }

    while(core >= 2)
    {
        core-=2;
        cosmic++;
    }
    while(cosmic >= 5)
    {
        cosmic-=5;
        astral++;
    }
    while(astral >= 18)
    {
        astral-=18;
        celestial++;
    }
    while(celestial >= 32)
    {
        celestial-=32;
        quantum++;
    }

    if(quantum > 50)
    {
        int temp;
        temp = quantum - 50;
        quantum = 50;
        celestial += temp * 32;
        if(celestial > 100)
        {
            temp = celestial - 100;
            celestial = 100;
            astral += temp * 18;
            if(astral > 200)
            {
                temp = astral - 200;
                astral = 200;
                cosmic += temp * 5;
                if(cosmic > 500)
                {
                    temp = cosmic - 500;
                    cosmic = 500;
                    core += temp * 2;
                }
            }
            
        }
    }
    
    cout << "Result:" << endl;
    cout << "Quantum Shards: " << quantum << endl;
    cout << "Celestial Fragments: " << celestial << endl;
    cout << "Astral Essence: " << astral << endl;
    cout << "Cosmic Dust: " << cosmic << endl;
    cout << "Element Core: " << core << endl;
    return 0;
}