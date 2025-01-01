// Reference Practice
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a; // here r is reference to a
                //  when declaring the reference variable we have to initialize it
                //   declared as reference but not initiaized will be the error so it must be initialized
                //   Reference is the another name of the variable
                // r is the reference variable and a is the actual variable
                // cout << r << endl; // we cannot chnge the refernce for example r = 20; will be the error

    int b = 30;
    r = b; // it is wrong assignmenet as it will change the value of a as well, so it should be avoided
    // r = 25;

    cout << r << endl;
    cout << a << endl;
    return 0;
}