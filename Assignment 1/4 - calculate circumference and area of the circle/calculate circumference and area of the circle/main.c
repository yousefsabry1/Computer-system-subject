#include <stdio.h>
#include <stdlib.h>

int main()

{
  int i=0;
  float radius;

   printf("For area enter 1 \n");
   printf("For circumference enter 2 \n");
   printf("enter here : ");
   scanf("%d", &i);
   printf("ok , enter radius : ");
   scanf("%f", &radius);


     if (i==1)
     {
         printf("The area is : %f \n", radius*radius*3.14);
     }
      else
      {
          printf("The circumference is : %f \n", radius*2*3.14);
      }

  printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

  return 1;
}
