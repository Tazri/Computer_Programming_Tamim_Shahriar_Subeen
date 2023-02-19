#include <stdio.h>

int main(){
    double celcius, farenheit;

    printf("Enter the temperature in celsius : ");
    scanf("%lf",&celcius);

    farenheit = 1.8 * celcius + 32;

    printf("Temperature in frenheit is : %lf\n",farenheit);
    
    return 0;
}

/*
Enter the temperature in celsius : 37
Temperature in frenheit is : 98.600000
*/