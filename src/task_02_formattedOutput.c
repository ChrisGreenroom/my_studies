/* Task_02_formattedOutput:
 * for full description of the task, see file:
 * "worksheet_02_formattedOutput.pdf" in docs folder.
 */

 #include <stdio.h>
 #include "task_02_formattedOutput.h"
 
 void print_formattedOutput(void)
 {
    printf("Task_02_formattedOutput: \n");

    int zahl = 10;

    printf("\nTask_02_01: \n\n");
    printf("Dez: %d \n", zahl); 
    printf("Okt: %o \n", zahl);
    printf("hex: %x \n", zahl);
    printf("HEX: %X \n", zahl);
    printf("\n");

    printf("\nTask_02_02: \n\n");
    printf("Dezimal:\n");
	printf("%d, ", 8);
	printf("%d, ", 9);
	printf("%d, ", 10);
	printf("%d, ", 11);
	printf("%d, ", 12);
	printf("%d, ", 13);
	printf("%d, ", 14);
	printf("%d, ", 15);
	printf("%d\n", 16);

	printf("Oktal:\n");
	printf("%o, ", 8);
	printf("%o, ", 9);
	printf("%o, ", 10);
	printf("%o, ", 11);
	printf("%o, ", 12);
	printf("%o, ", 13);
	printf("%o, ", 14);
	printf("%o, ", 15);
	printf("%o\n", 16);

	printf("Hexadezimal:\n");
	printf("%x, ", 8);
	printf("%x, ", 9);
	printf("%x, ", 10);
	printf("%x, ", 11);
	printf("%x, ", 12);
	printf("%x, ", 13);
	printf("%x, ", 14);
	printf("%x, ", 15);
	printf("%x \n", 16);


    printf("\nTask_02_03: \n\n");
    /* rechtsbuendig Dezimal */
	printf("%d\n",4711);

	/* linksbuendig Dezimal */
	printf("%-d\n",4711);

	/* mit Vorzeichen Dezimal */
	printf("%+d\n",4711);

	/* mit Vorzeichen linksbuendig Dezimal */
	printf("%+-d\n",-4711);

	/* mit fuehrender Null Dezimal */
	printf("%0d\n",4711);

	/* mehrerer Stellen angeben Dezimal */
	printf("%8d\n",4711);

	/* Mit Vorzeichen, mehrere Stellen und fuehrender Null Dezimal */
	printf("%+08d\n",4711);

	/* rechtsbuendig Fliesskomma */
	printf("%f\n",0.24124);

	/* linksbuendig Fliesskomma */
	printf("%-f\n",0.24124);

	/* Mit Vorzeichen Fliesskomma */
	printf("%+f\n",0.24124);

	/* Mit Vorzeichen und linksbuendig Fliesskomma */
	printf("%+-f\n",0.24124);

	/* Mit fuehrender Null Flisskomma */
	printf("%0f\n",0.24124);

	/* Mehrere Stellen angeben Fliessomma */
	printf("%8f\n",0.24124);

	/* Mit Vorzeichen, mehrere Stellen und fuehrender Null Fliesskomma */
	printf("%+08f\n",0.24124);

	/* Mehrere Nachkommastellen Fliesskomma */
	printf("%.8f\n",0.24124);

    printf("\nTask_02_04: \n\n");
    printf("Adresse: \n");
    printf(" Hochschule \n  Aschaffenburg \n");
    printf(" Wuerburger \n   Strasse 45 \n");
    printf(" 63743 Aschaffenburg \n\n");
    printf("    Gebauede: 40 \n");
    printf("\tRaum: 130 \n");
 }
 