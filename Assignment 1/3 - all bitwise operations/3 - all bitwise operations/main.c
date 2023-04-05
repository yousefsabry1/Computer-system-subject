#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a , b;

    printf("enter your first number : ");
    scanf("%d", &a);

    printf("enter your second number : ");
    scanf("%d", &b);


    printf("%d or %d : %d\n", a,b , a | b);
    printf("%d xor %d : %d\n", a,b , a ^ b);
    printf("~%d : %d\n", a, ~a);
    printf("~%d : %d\n", b, ~b);
    printf("%d << 2 : %d\n", a, a << 2);
    printf("%d << 2 : %d\n", b, b << 2);

printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");
    return 1;
}
