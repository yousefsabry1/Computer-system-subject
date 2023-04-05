#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a , b;

   printf("enter your first number : ");
   scanf("%d", &a);

   printf("enter your second number : ");
   scanf("%d", &b);

   printf("Sum is %d + %d : %d \n", a,b , (a+b));
   printf("Sub is %d - %d : %d \n", a,b , (a-b));
   printf("Mult is %d * %d : %d \n", a,b , (a*b));
   if (b==0)
   {
       printf("Are you look for division ? sorry i cant divide by zero");
   }
   else
   {
       printf("Divi is %d / %d : %f \n", a,b , (float) (a/b));

   }


   printf("Mod is %d %% %d : %d \n", a,b , (a%b));


 printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");
return 0;

}
