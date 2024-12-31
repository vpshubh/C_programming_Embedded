// Malloc Function

// inside C- language
/*
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int)); // only p is inside of stack and the array of 5 integers is inside heap
    p[0] = 10;
    p[1] = 15;
    p[2] = 14;
    p[3] = 21;
    p[4] = 31;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl; // arrray inside heap
    }
    return 0;
} */

// Dynamic memory allocation in C++

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5]; // only p is inside of stack and the array of 5 integers is inside heap
    p[0] = 10;
    p[1] = 15;
    p[2] = 14;
    p[3] = 21;
    p[4] = 31;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl; // arrray inside heap
    }
    return 0;
}