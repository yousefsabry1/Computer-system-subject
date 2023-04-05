#include <stdio.h>
#include <stdlib.h>

int main()
{


    char ch;
    printf("Enter your character : ");
    scanf("%c", &ch);

    if ( ch >= 'a' && ch <= 'z')
    {
        printf("The character  %c is lowercase \n", ch);
    }
    else if ( ch >= 'A' && ch <= 'Z')
    {
        printf("The character %c is uppercase \n", ch);
    }
    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

    return 1;
}
