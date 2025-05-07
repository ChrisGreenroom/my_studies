#include <stdio.h>
#include "controller.h"
#include "math.h"
#include <stdbool.h>

void menu()
{
    bool run_program = true;
    int go_on;

    while (run_program)
    {

        show_options();

        switch (user_chooses())
        {
        case 1:
            calculate();
            printf("\nEnter any number to continue \n");
            scanf("%d", &go_on);
            break;
        case 2:
            show_myData();
            printf("\nEnter any number to continue \n");
            scanf("%d", &go_on);
            break;
        case 3:
            run_program = end_program();
            break;
        default:
            printf("Irregular input. \n");
            printf("\nEnter any number to continue \n");
            scanf("%d", &go_on);
            break;
        }
    }
}

void show_options(void)
{
    printf("\n");
    printf("Welcome to the menu! \n");
    printf("Those are you options to choose: \n");
    printf("(1) Calculate \n");
    printf("(2) Show data \n");
    printf("(3) End program \n");
    printf("\n");
    printf("Please choose :)\n");
}

int user_chooses(void)
{
    int users_choice;
    scanf("%d", &users_choice);

    return users_choice;
}

int get_input_number(void)
{
    int number;
    printf("Enter an integer: \t");
    scanf("%d", &number);

    return number;
}

void calculate(void)
{
    printf("\nWhat calculation do you want to perform? \n");
    printf("\t(1) Addition \n");
    printf("\t(2) Subtraction \n");
    printf("\t(3) Division \n");
    printf("\t(4) Multiplication \n");
    printf("\n");

    int result;

    switch (user_chooses())
    {
    case 1:
        result = add(get_input_number(), get_input_number());
        printf("Result: %d \n", result);
        break;

    case 2:
        result = subtract(get_input_number(), get_input_number());
        printf("Result: %d \n", result);
        break;

    case 3:
        printf("Not implemented yet"); // Todo
        break;

    case 4:
        printf("Not implemented yet"); // Todo
        break;

    default:
        printf("Not an option!\n");
        break;
    }
}

void show_myData(void)
{
    printf("\n");
    printf("Christian \n");
    printf("Braun \n");
    printf("0123456789 \n");
    printf("Mattstrasse 4-6 \n");
    printf("63743 Aschaffenburg \n");
    printf(" \n");
}

bool end_program(void)
{
    return false;
}