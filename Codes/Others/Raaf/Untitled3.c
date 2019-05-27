#include<stdio.h>
int main ()
{
    double loan_amount,interest_rate,number_of_years,total_amount,monthly_amount;
    printf("Enter Loan Amount:");
    scanf("%lf",&loan_amount);
    printf("Enter Interest Rate:");
    scanf("%lf",&interest_rate);
    printf("Enter Number Of Years:");
    scanf("%lf",&number_of_years);
    total_amount=loan_amount+((loan_amount*interest_rate*number_of_years)/100.00);
    monthly_amount=total_amount/(number_of_years*12);
    printf("Your Total Amount: %.2lf\nYour Monthly Amount: %.2lf\n",total_amount,monthly_amount);
    return 0;
}
