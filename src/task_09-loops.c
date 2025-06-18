#include <stdio.h>
#include "task_09-loops.h"

void small_101(void){
    int result = 0;

    for (size_t line = 0; line < 10; line++)
    {
        for (size_t column = 0; column < 10; column++)
        {
            result = line * column;
            printf("%d", result);
        }
        
    }
    
}