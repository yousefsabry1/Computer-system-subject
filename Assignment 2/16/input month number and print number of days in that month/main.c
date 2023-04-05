#include <stdio.h>
#include <stdlib.h>

int main()
{

  int month;
  printf("Enter month number ( 1 - 12 ) : ");
  scanf("%d", &month);

  switch (month)
  {
  case 1:
    printf("The month is January and it’s num of days is : 31 days \n");
            break;
  case 2:
    printf("The month is February and it’s num of days is : 28 days and 29 days if it leap year \n");
            break;
  case 3:
    printf("The month is March and it’s num of days is : 31 days \n");
            break;
  case 4:
    printf("The month is April and it’s num of days is : 30 days \n");
            break;
  case 5:
    printf("The month is May and it’s num of days is : 31 days \n");
            break;
  case 6:
    printf("The month is June and it’s num of days is : 30 days \n");
            break;
  case 7:
    printf("The month is July and it’s num of days is : 31 days \n");
            break;
  case 8:
    printf("The month is August and it’s num of days is : 31 days \n");
            break;
  case 9:
    printf("The month is Septemper and it’s num of days is : 30 days \n");
            break;
  case 10:
    printf("The month is October and it’s num of days is : 31 days \n");
            break;
  case 11:
    printf("The month is November and it’s num of days is : 30 days \n");
            break;
  case 12:
    printf("The month is December and it’s num of days is : 31 days \n");
            break;
  default:
    printf("Invalid month number. \n");
            break;
  }

printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");
    return 7;
}

































