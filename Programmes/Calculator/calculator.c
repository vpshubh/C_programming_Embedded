// Design a Calculator Simple.
#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);
void print_menu();
int main()
{
    double num1, num2, result;
    int choice;

    while (1)
    {
        print_menu();
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Error: Invalid Menu Choice\n");
            continue;
        }

        printf("Enter the first number: \n");
        scanf("%lf", &num1);
        printf("Enter the second number: \n");
        scanf("%lf", &num2);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Sum of %lf and %lf = %lf ", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Subtraction of %lf and %lf = %lf ", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Multiplication of %lf and %lf = %lf ", num1, num2, result);
            break;
        case 4:
            result = division(num1, num2);
            printf("Division of %lf and %lf = %lf ", num1, num2, result);
            break;
        case 5:
            result = modulus(num1, num2);
            printf("Modulus of %lf and %lf = %lf ", num1, num2, result);
            break;
        case 6:
            result = pow(num1, num2);
            printf("Power of %lf to the %lf = %lf ", num1, num2, result);
            break;
        default:
            printf("Invalid choice");
        }
        if (!isnan(result))
        {
            printf("\n\nResult of Operation: %.2f\n", result);
        }
    };
    return 0;
}

void print_menu()
{
    printf("\n\n---------------------------------------------------------\n");
    printf("Welcome to the Simple Calculator\n");
    printf("Enter the choice of operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5. Modulus\n6. Power\n7. Exit\n");
    printf("\nEnter your choice: ");
}

double division(double num1, double num2)
{

    if (num2 == 0)
    {
        fprintf(stderr, "Error: Invalid Argumets for Division\n");
        return NAN;
    }
    else
    {
        return num1 / num2;
    }
}

double modulus(int num1, int num2)
{
    if (num2 == 0)
    {
        fprintf(stderr, "Error: Invalid Arguments for Modulus\n");
        return NAN;
    }
    else
    {
        return num1 % num2;
    }
}