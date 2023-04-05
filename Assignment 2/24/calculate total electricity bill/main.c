#include <stdio.h>
#include <stdlib.h>

int main()
{


    float unit_charges, total_bill ,surcharge;

    printf("Enter electricity unit charge : ");
    scanf("%f", &unit_charges);

    if (unit_charges <= 50)
    {
     total_bill = unit_charges * 0.5;
    }
    else if (unit_charges <= 150)
    {
      total_bill = 25 + (unit_charges - 50) * 0.75;
    }
   else if (unit_charges <= 250)
    {
      total_bill = 100 + (unit_charges - 150) * 1.20;
    }
   else
    {
      total_bill = 220 + (unit_charges - 250) * 1.50;
    }

   surcharge = 0.2 * total_bill;
   total_bill += surcharge;

   printf("Total electricity bill is : %.2f\n", total_bill);

   printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");



















    return 7;
}
