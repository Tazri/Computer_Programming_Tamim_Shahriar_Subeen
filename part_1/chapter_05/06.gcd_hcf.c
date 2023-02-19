#include <stdio.h>

int main(){
    int a,b,t,x,gcd,mul,hcf;

    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : " );
    scanf("%d",&b);

    mul = a*b;

    if(a == 0)  gcd = a;
    else if (b == 0) gcd =  b;
    else{
        while(b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    hcf = mul/gcd;

    printf("gcd : %d",gcd);
    printf("\nhcf : %d\n",hcf);

    return 0;
}

/*
Output : 
Enter a : 3
Enter b : 6
gcd : 3
hcf : 6
*/