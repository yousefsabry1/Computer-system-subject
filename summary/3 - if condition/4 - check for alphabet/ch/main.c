#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch;
    printf("Enter your character : ");
    scanf("%c", &ch); // dont forget to make space after ,

    if ( ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an alphabet\n",ch);
    }
    else
    {
        printf("%c isnot an alphabet\n",ch);
    }


    return 6;
}
