#include <stdio.h>
#include <stdlib.h>

int main()
{


    char ch;
    printf("Enter your character :");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= "z" ||
        ch >= 'A' && ch <= "Z" )
    {
        printf("%c is an alphabet \n",ch);
    }
    else if ( ch >= '0' && ch <= '10')
    {
        printf("%c is a digit \n",ch);
    }
    else
    {
        printf("%c is a special character \n", ch);
    }

    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

    return 1;
}
