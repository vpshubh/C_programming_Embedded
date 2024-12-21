// Design a simple clock here

#include <stdio.h>
#include <time.h>

void fill_time(char *);
int main()
{
    char time[50];
    fill_time(time);
    printf("The current time is %s\n", time);
    return 0;
}

void fill_time(char *buffer)
{

    time_t rawtime; // system will design the ime according to this
    struct tm *current_time;
    // char buffer[50];

    time(&rawtime);
    current_time = localtime(&rawtime);
    strftime(buffer, 50, "%H:%M:%S %p", current_time); // strftime= string format of time >> https://en.cppreference.com/w/c/chrono/strftime >> https://en.cppreference cppreference.com/w/c/chrono/strftime

    // strftime(buffer, sizeof(buffer), "%H:%M:%S %p", current_time); // strftime= string format of time >> https://en.cppreference.com/w/c/chrono/strftime >> https://en.cppreference cppreference.com/w/c/chrono/strftime
}