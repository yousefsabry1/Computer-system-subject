#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n ;
    printf("Enter your num : ");
    scanf("%d",&n);

    switch ( n > 0 )
    {
       case 1 :
    printf("Your num is positive\n");
    break ;

case 0 : //if not
    switch ( n < 0 )
    {
    case 1 :
        printf("Your num is negative\n");
        break ;
    case 0 :
        printf("Your num is zero\n");
        break ;
    }
    }
    return 6;
}
