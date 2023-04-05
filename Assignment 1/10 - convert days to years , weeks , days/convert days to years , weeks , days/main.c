#include <stdio.h>
#include <stdlib.h>

int main()
{

    int days,year,week,day;

    printf("Enter number of days : ");
    scanf("%d", &days);
    printf("Year is %d / 365 : %d \n",days , days/365);
    printf("Week is (%d %% 365)/7 : %d \n",days , (days%365)/7);
    printf("Day is %d - ((year * 365) + (week * 7)) : %d \n",days , days - ((year * 365) + (week * 7)));


    printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");










    return 1;
}
