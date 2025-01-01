// Pointers to Structures
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

    /* Rectangle r1 = {10, 5}; // Inside C++ if removed strcut then no error but at C it will throw undefiined error
    // struct is keyword which is not mandatory in C++ but in C it is mandatory
    // In C++ we can use class or struct keyword to define a class
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    Rectangle *p = &r1;
    cout << p->length << endl;  // Accessing elements using pointer
    cout << p->breadth << endl; // or cout << (*p).length << endl;
 */
    //--------------------------------For HEAP-------------------------------------------
    Rectangle *p;
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // For c language
    p = new Rectangle; // For C++
    p->breadth = 15;
    p->length = 7;
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}