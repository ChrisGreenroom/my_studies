/*
 *
 */

#include "task_03_algorithmsNassiShneidermannDiagram.h"
#include <stdio.h>

void find_maximum_of_two_numbers(void)
{
    float number_1;
    float number_2;

    // turn off buffer
    setvbuf(stdout, NULL, _IONBF, 0);

    // task-announcement
    printf("Task_03: \n");

    // read in data
    printf("Please enter your first number: \n");
    scanf("%f", &number_1);

    printf("Please enter your second number: \n");
    scanf("%f", &number_2);

    // number comparision
    if (number_1 > number_2)
    {
        printf("%f", number_1);
    }
    else
    {
        printf("%f", number_2);
    }
}