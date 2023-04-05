#include <stdio.h>
#include <stdlib.h>

int main()
{


    float fh , c;


    printf("Enter The temperature in fahrenheit : ");
    scanf("%f", &fh);
      printf("The temperature in celsius is (%f - 32 ) * 5/9 : %f\n", fh , (fh - 32) * 5/9);

      printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");



    return 1;
}
