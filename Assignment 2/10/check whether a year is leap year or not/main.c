#include <stdio.h>
#include <stdlib.h>

int main()
{

    int y;
    printf("Enter the year : ");
    scanf("%d",&y);

    if (y % 4 == 0 && y % 100 != 0)
    {
        printf("%d is a leap year \n", y);
    }
    else
    {
        printf("%d isn’t a leap year \n", y);
    }
    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

    return 1;
}
