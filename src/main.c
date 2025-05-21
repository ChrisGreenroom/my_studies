#include <stdio.h>
#include "tools.h"
#include "task_01_myData.h"
#include "task_02_formattedOutput.h"
#include "task_03_algorithmsNassiShneidermannDiagram.h"
#include "task_08_if_branches.h"

int main(void)
{
    //say_hello();
    //print_personal_data();
    //print_formattedOutput();
    //find_maximum_of_two_numbers();
    check_if_zero();

    printf("\nThis is the End! \n");
    printf("Press any key to continue.\n");

    // clear buffer for clean end.
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
    getchar();

    return 0;
}
