#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j;
 int x,y,z;
 int space,stars;
 x=4;
 y=7;
 z=8;

 for ( i = 1; i <= 4 ; i++) //lines = 4
 {
    for ( j=1;j<=x;j++)//first space
    {
       printf(" ");
    }
    for (j=1 ; j<= y ; j++)//first stars
    {
        printf("*");
    }
    for (j=1 ;j<=z;j++)//second space
    {
        printf(" ");
    }
    for (j=1 ; j<= y ; j++)//second stars
    {
        printf("*");
    }
    printf("\n");
    x=x-1;
    y=y+2;
    z=z-2;
 }
 printf("*******************************\n");
 printf(" *********");
 printf("I Love femnu");
 printf("******** \n");


 space = 2;
 stars = 27;
 for(i=1;i<=14;i++)
 {
    for(j=1;j<=space; j++)
    {
       printf(" ");
    }
    for(j=stars;j>=1;j--)
    {
        printf("*");
    }
    printf("\n");
    space=space+1;
    stars=stars-2;
 }
 printf("\033[0;33m");
 printf("          #The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");










    return 0;
}

