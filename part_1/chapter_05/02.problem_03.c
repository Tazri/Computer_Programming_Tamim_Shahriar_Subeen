#include <stdio.h>

int main(){
    double load_amount, interest_rate, number_of_years, total_amount, monthly_amount;

    printf("Enter the load amount : ");
    scanf("%lf",&load_amount);

    printf("Enter the interest rate : ");
    scanf("%lf",&interest_rate);

    printf("Number of years : ");
    scanf("%lf",&number_of_years);

    total_amount = load_amount + load_amount * interest_rate / 100.00;
    monthly_amount = total_amount / (number_of_years * 12);

    printf("Total amount : %0.2lf\n",total_amount);
    printf("Monthly amount : %0.2lf\n",monthly_amount);

    return 0;
}

/*
Enter the load amount : 10000
Enter the interest rate : 35
Number of years : 5
Total amount : 13500.00
Monthly amount : 225.00
*/