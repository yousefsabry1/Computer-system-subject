#include <stdio.h>

int main() {


    for (int i = 1; i <= 5; i++) {

        for (int j = 1; j <= 5 ; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

    return 6;
}
