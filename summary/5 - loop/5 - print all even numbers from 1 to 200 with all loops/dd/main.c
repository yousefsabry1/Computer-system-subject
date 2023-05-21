#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n=0 ;

    // with for :

    for ( int i = 0 ; i <= 200 ; i+=2)
    {
        printf("%d\n",i);
    }

    // with while :

    while (n<=200)
    {
        printf("%d\n",n);  //with while
        n+=2;
    }

   // with do while :

    do
    {
        printf("%d\n",n);
        n+=2;
    } while ( n <= 200 );

    return 6;
}
