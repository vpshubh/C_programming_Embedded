#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    struct Rectangle r1 = {10, 5};
    printf("%d\n", r1.length);
    printf("%d\n", r1.breadth);
    return 0;
}