// Pointer to an array

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 6, 8, 10}; // decalre anything it is going to be created at the stack frame of main function
    int *p;
    p = arr; // & will not be used here as if inddex specification not shown

    for (int i = 0; i < 5; i++)
    {
        // cout << arr[i] << endl;   // Accessing elements using index
        // cout << *(p + i) << endl; // Accessing elements using pointer
        // or the sytatement above can be written this way
        cout << p[i] << endl;
    }
    return 0;
}