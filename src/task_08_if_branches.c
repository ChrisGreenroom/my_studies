/**/
#include "task_08_if_branches.h"
#include <stdio.h>

void check_if_zero(){
    int number;
    
    setbuf(stdout, NULL);

    printf("\nTask_08: \n");

    printf("Enter a number: \n");
    scanf("%d", &number);

    if(number == 0) printf("Zahl ist Null \n");
    else printf ("Zahl ist nicht Null \n");
    
    
}