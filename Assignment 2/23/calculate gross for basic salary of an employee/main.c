#include <stdio.h>
#include <stdlib.h>

int main()
{

    float ba_salary , hra , da , gr_salary;

    printf("Enter the basic salary : ");
    scanf("%f" , &ba_salary);

    if (ba_salary >= 10000)
    {
      hra = 0.2 * ba_salary;
      da = 0.8 * ba_salary;
    }
    else if (ba_salary >20000)
    {
        hra = 0.25 * ba_salary;
        da = 0.9 * ba_salary;
    }
    else
    {
        hra = 0.3 * ba_salary;
        da = 0.95 * ba_salary;
    }

    gr_salary = ba_salary + hra + da;

   printf("Gross salary is : %.2f\n", gr_salary);
   printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


printf("Please enter any key to exit .");
system("pause > null");


    return 7;
}
