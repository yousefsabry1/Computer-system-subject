#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch;
    printf("Enter your alphabet : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i' ||
        ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I')

       {
         printf("%c is a vowel \n", ch);
       }
       else
       {
           printf("%c is a consonant \n", ch);
       }

       printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

    return 1;
}
