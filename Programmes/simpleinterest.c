#include <stdio.h>
#include <math.h>
int main()
{
    int principal, t;
    float roi, si;

    printf("Enter the Principal: \n");
    scanf("%d", &principal);
    printf("Enter the Time: \n");
    scanf("%d", &t);
    printf("Enter the Rate of Interest: \n");
    scanf("%f", &roi);
    si = (principal * t * roi) / 100;
    printf("Simple Interest is:\n%f", si);
}