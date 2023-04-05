#include <stdio.h>
#include <stdlib.h>

int main()
{

    int week;
    printf("Enter week number ( 1 - 7 ) : ");
    scanf("%d",&week);

    switch (week)
    {
  case 1:
    printf("Saturday \n");
    break;
  case 2:
    printf("Sunday \n");
    break;
  case 3:
    printf("Monday \n");
    break;
  case 4:
    printf("Tuesday \n");
    break;
  case 5:
    printf("Wednesday \n");
    break;
  case 6:
    printf("Thursday \n");
    break;
  case 7:
    printf("Friday \n");
    break;
  default:
    printf("invailed week number \n");
    break;
    }

 printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");
    return 1;
}
