Chapter 05: Little Much Math
============================

Here solution of all problem : 

### Problem 01 : 

```c
#include <stdio.h>

int main(){
    int x,y,c1,c2;

    // get c1 and c2
    printf("x + y = ");
    scanf("%d",&c1);

    printf("x - y = ");
    scanf("%d",&c2);

    // caculate x and y
    x = (c1+c2)/2;
    y = c1 - x;

    printf("x = %d\ny = %d\n",x,y);

    return 0;
}

/*
Output : 
x + y = 15
x - y = 5
x = 10
y = 5
*/
```

### Problem 02 : 

```c
#include <stdio.h>

int main(){
    double x,y,a1,a2,b1,b2,c1,c2,determine;

    // get all value
    printf("a1 : ");
    scanf("%lf",&a1);

    printf("b1 : ");
    scanf("%lf",&b1);

    printf("c1 : ");
    scanf("%lf",&c1);

    printf("a2 : ");
    scanf("%lf",&a2);

    printf("b2 : ");
    scanf("%lf",&b2);

    printf("c2 : ");
    scanf("%lf",&c2);
    
    determine = a1*b2 - a2*b1;
    x = (b2*c1 - b1*c2)/ determine;
    y = (a1*c2 - a2*c1)/ determine;

    if(determine != 0){
        printf("x = %lf\n",x);
        printf("y = %lf\n",y);
    }else{
        printf("There is no solution!!\n");
    }

    return 0;
}

/*
Output : 
a1 : 4
b1 : 5
c1 : 14
a2 : 5
b2 : 6
c2 : 17
There is no solution!!
*/
```

### Problem 04 : 

```c
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
```

### Problem 05 : 
```c
#include <stdio.h>

int main(){
    double n, sum;

    printf("Enter the n : ");
    scanf("%lf",&n);

    sum = (n*(n+1))/2;

    printf("Sum : %0.0lf\n",sum);

    return 0;
}

/*
Output : 
Enter the n : 1000
Sum : 500500
*/
```

### Problem 06: 

```c
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
```

### Problem 07 : 

```c
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
```

<hr />
<br />

[< Chapter 04: Loop](./../chapter_04/chapter_04.md) | [Part 1](./../part_1.md) | [Chapter 06: Array >](./../chapter_06/chapter_06.md)
-----------------------------------