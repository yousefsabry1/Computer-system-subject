#include <stdio.h>
#include <stdlib.h>

int main()
{


 float a ;
   printf("Enter your number : ");
   scanf("%f",&a);

   if (a > 0)
   {
    printf("Your number %0.1f is positive\n", a);
   }
   else if (a < 0)
   {
     printf("Your number %0.1f is negative\n", a);
   }
   else
   {
    printf("Your number is zero\n");
   }
   printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");
    return 1;
}
































