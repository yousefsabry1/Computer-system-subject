#include <stdio.h>
#include <stdlib.h>

int main()
{

    int day;

    printf("Enter your num of day ( 1 - 7 ) : ");
    scanf("%d",&day);

    switch (day)
    {
    case 1 :  //for num 1
        printf("1. is Saturday\n");
        break; // for out the condition
    case 2 :
        printf("2. is Sunday\n");
        break;
    case 3 :
        printf("3. is Monday\n");
        break;
    case 4 :
        printf("4. is Tuesday\n");
        break;
    case 5 :
        printf("5. is Wednesday\n");
        break;
    case 6 :
        printf("6. is Thursday\n");
        break;
    case 7 :
        printf("7. is Friday\n");
        break;

    default :  // equal else in if condition
        printf("Error , please enter number between ( 1 - 7 ) ");

    }
    return 6;
}
