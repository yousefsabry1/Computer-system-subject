#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    float cm,m,km;

    printf("Do you want to convert cm to km and m , okay \n");
    printf("Enter 1 to convert cm to m \n");
    printf("Enter 2 to convert cm to km \n");
    printf("Enter here : ");
    scanf("%d", &i);
    printf("Enter length in centimeter :");
    scanf("%f", &cm);

    if (i==1)
    {
        printf("value in meter is %f / 100.0 : %f \n",cm , cm/100);

    }
    else
    {
        printf("value in kilometer is %f / 100000.0 : %f\n",cm ,cm/100000.0);

    }

 printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");



    return 1;
}
