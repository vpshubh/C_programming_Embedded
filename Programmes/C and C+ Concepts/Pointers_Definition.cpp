// Pointer are used for cccessing the resources outside the program
// They are used to access the memory location of the variables
// Useful for passing the parameters to the functions

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    // declaration of the pointer
    int *p;
    // assigning the address of the variable to the pointer
    p = &a;
    // address variabes are called as pointer in C++
    cout << a << endl;
    printf("Using pointer, printing the value of a: %d\n", *p);

    printf("Printing the pointer address: %d %d", p, &a);
    // cout << *p << endl;
    return 0;
}