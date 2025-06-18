#include <stdio.h>
#include "task_09_loops.h"

void small_101(void){
    int result = 0;

    for (size_t line = 1; line <= 10; line++)
    {
        for (size_t column = 1; column <= 10; column++)
        {
            result = line * column;
            printf("%d ", result);
        }
        printf("\n");
    }
    
}