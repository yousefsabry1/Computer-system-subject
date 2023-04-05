#include <stdio.h>
#include <stdlib.h>

int main()
{


   int cash;
   printf("Enter your cash : ");
   scanf("%d", &cash);

   printf("number of notes of 2000 : %d \n", cash/2000);
   cash = cash % 2000;

   printf("number of notes of 1000 : %d \n", cash/1000);
   cash = cash % 1000;

   printf("number of notes of 500 : %d \n", cash/500);
   cash = cash % 500;

   printf("number of notes of 200 : %d \n", cash/200);
   cash = cash % 200;

   printf("number of notes of 100 : %d \n", cash/100);
   cash = cash % 100;

   printf("number of notes of 50 : %d \n", cash/50);
   cash = cash % 50;

   printf("number of notes of 20 : %d \n", cash/20);
   cash = cash % 20;

   printf("number of notes of 10 : %d \n", cash/10);
   cash = cash % 10;

   printf("number of notes of 5 : %d \n", cash/5);
   cash = cash % 5;

   printf("number of notes of 500 : %d \n", cash/1);
   cash = cash % 1;

   printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");












    return 7;
}
