#include <stdio.h>
#include <string.h>
#include "controller.h"

void run(void)
{
    //	Welcome-message
    printf("Welcome to this program \xF0\x9F\x98\x8A \n");

    // //	Declaration
    // float number_1;
    // float number_2;
    // float result_subtract;
    // float result_add;

    // //	Data read-in
    // printf("Read in first number: ");
    // scanf("%f", &number_1);

    // printf("Read in second number: ");
    // scanf("%f", &number_2);

    // //	Calculation / call of function
    // result_subtract = subtract(number_1, number_2);
    // result_add = add(number_1, number_2);

    // //	Show results
    // printf("Your numbers subtracted: %f \n", result_subtract);
    // printf("Your numbers added: %f \n", result_add);

    menu();

    //	Ending message
    printf("\nThis is the end \xF0\x9F\x98\xA2 \n");
}