#include <stdio.h>
#include <stdlib.h>

int main()
{

 char c;
 int i;
 float f;
 double v;


 printf("enter your character : ");
 scanf("%c", &c);
 printf("Your character is : %c \n", c);

 printf("enter your integer : ");
 scanf("%d", &i);
 printf("Your integer is : %d \n", i);

 printf("enter your float : ");
 scanf("%f", &f);
 printf("Your float is : %0.2f \n", f);

 printf("enter your double : ");
 scanf("%lf", &v);
 printf("Your double is : %lf \n", v);

 printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");

    return 1;
}
