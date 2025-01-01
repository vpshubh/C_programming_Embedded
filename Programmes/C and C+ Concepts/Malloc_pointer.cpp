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
    // Note: If we are dynamically creating the memory for an array we have to delete that memory using free(),

    // and if we are sing c- language then we have to use free() p
    // heap memory should be deallocated

    free(p);
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
    // C++ syntax
    // Using new keyword we have dynamically created the memory for an array, in heap
    // so if we are creating the memeory like this wee ave to also delete that memory
    // using delete keyword
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
    delete[] p; // delete the memory  if it is any of the variable then we have to write like, delete "variable name"
                // but for an array we have to write delete[] in C++
                // heap memory should be deallocated

    return 0;
}