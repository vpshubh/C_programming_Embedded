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
    struct Rectangle r1 = {10, 5};
    int area;
    r1.length = 15;
    r1.breadth = 20;
    area = r1.breadth * r1.length;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    cout << area << endl;
    return 0;
}