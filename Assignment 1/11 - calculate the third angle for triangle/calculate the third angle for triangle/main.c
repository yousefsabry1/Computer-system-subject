#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a,b;

    printf("enter your first angle : ");
    scanf("%f", &a);
    printf("enter your second angle : ");
    scanf("%f", &b);
    printf("The third angle is 180 - (%f + %f) : %f\n", a,b , (180 - (a + b)));


    printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");



    return 1;
}
