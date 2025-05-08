#include <stdio.h>
#include "tools.h"
#include "task_01_myData.h"
#include "task_02_formattedOutput.h"

int main(void)
{
    say_hello();
    print_personal_data();
    print_formattedOutput();

    printf("\nThis is the End! \n");
    printf("Press any key to continue.\n");

    getchar();

    return 0;
}
