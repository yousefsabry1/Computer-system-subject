#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("Enter your number : ");
    scanf("%d",&n);

    for ( int i = 1 ; i<=n ; i+=2)
    {

        printf("%d\n",i);                        //if you want to print odd numbers
    }


    for ( int i = 0 ; i <= n ; i+=2)
    {
        printf("%d\n",i);                          //if you want to print even numbers
    }

    return 6;
}
