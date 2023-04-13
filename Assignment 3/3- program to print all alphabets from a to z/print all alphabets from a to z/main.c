#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char ch = 'a' ;
    printf("Enter any thing : ");
    scanf("%d",&i);
    printf("Alphabets from a to z are :\n");

    while ( ch <= 'z')
    {
       printf("%c ",ch);
       ch++;

    }
    printf("\n");



  printf("\033[0;33m");
 printf("#The phoenix ):\n");
  printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");



    return 6;
}
