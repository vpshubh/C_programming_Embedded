// Design a program Welcome to the World of Guessing Number.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random, guess;
    int no_of_guesses = 0;
    srand(time(NULL));
    printf("Welcome to the World of Guessing Number.\n");
    random = rand() % 100 + 1; // Generating number betweeen 0-100
    // printf("The number is: %d\n", random);
    do
    {
        printf("Please enter the guess number (Between 1-100): \n");
        scanf("%d", &guess);
        no_of_guesses++;
        if (guess < random)
        {
            printf("Your guess is too low. Guess larger number\n"); /* code */
        }
        else if (guess > random)
        {
            printf("Your guess is too high. Guess smaller number\n"); /* code */
        }
        else
        {
            printf("Congratuations!!! You have guessed the number correctly, in %d attempts.\n,", no_of_guesses);
        }

    } while (guess != random);
    printf("Thank you for playing the game.\n");
    printf("Developed by Shubham Chakravarty");
    return 0;
}