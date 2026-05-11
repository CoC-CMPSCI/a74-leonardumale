#ifndef MAIN_HPP
#define MAIN_HPP

// Array insertion / deletion in a sorted array

#include <iostream>
#include <iomanip>
using namespace std;

void insertone(int[], int &, int);
void deleteone(int[], int &, int);
void printout(int[], int);

void insertone(int number[], int &length, int usernum)
{
    // TODO: insert usernum into the sorted array, then increment length
}

void deleteone(int number[], int &length, int usernum)
{
    // TODO: find usernum, shift remaining elements left, decrement length
}

void printout(int number[], int last)
{
    for (int i = 0; i < last; i++)
        cout << setw(5) << number[i];
    cout << endl;
}

#endif
