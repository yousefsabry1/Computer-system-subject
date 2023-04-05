#include <stdio.h>
#include <stdlib.h>

int main()
{

    float physics, chemistry, biology , mathematics , computer , percentage;
    char grade;

    printf("Enter marks of physics : ");
    scanf("%f", &physics);
    printf("Enter marks of chemistry : ");
    scanf("%f", &chemistry);
    printf("Enter marks of biology : ");
    scanf("%f", &biology);
    printf("Enter marks of mathematics : ");
    scanf("%f", &mathematics);
    printf("Enter marks of computer : ");
    scanf("%f", &computer);

    percentage = ( physics + chemistry + biology + mathematics + computer) / 5.0;

    if (percentage >= 90)
    {
        printf("Your percentage is %.2f \n", percentage);
        printf("Your grade is A \n");
    }
    else if (percentage >= 80)
    {
        printf("Your percentage is %.2f \n", percentage);
        printf("Your grade is B \n");
    }
    else if (percentage >= 70)
    {
        printf("Your percentage is %.2f \n", percentage);
        printf("Your grade is C \n");
    }
    else if (percentage >= 60)
    {
        printf("Your percentage is %.2f \n", percentage);
        printf("Your grade is D \n");
    }
    else if (percentage >= 50)
    {
        printf("Your percentage is %.2f \n", percentage);
        printf("Your grade is E \n");
    }
    else
    {
        printf("Your percentage is %.2f \n", percentage);
        printf("Your grade is F \n");
    }
    printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");










    return 7;
}
