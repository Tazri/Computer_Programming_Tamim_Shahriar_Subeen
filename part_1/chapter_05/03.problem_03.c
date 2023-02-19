#include <stdio.h>

int main(){
    double t,v,s;

    printf("Enter the v : ");
    scanf("%lf",&v);

    printf("Enter the t : ");
    scanf("%lf",&t);

    s = 2 * t * v;

    printf("s : %0.2lf\n",s);

    return 0;
}

/*
Output : 
Enter the v : 40
Enter the t : 9
s : 720.00
*/