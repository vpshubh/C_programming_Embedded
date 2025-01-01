// pointers with char magic
#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    int *p1;    // 4 bytes
    char *p2;   // 1 byte
    float *p3;  // 4 bytes
    double *p4; // 8 bytes
    struct Rectangle *p5;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    // the size of pointer is independent of data type
    // old compiler takes the size of 4 byte but modern 64 bit compiler takes the size of 8 byte

    return 0;
}