Chapter 07: Function
======================

Basic function syntax in c : 
```c
data_type funtion_name(parameter_list){
    // function defenation
    return // return value;
}
```

If function dose not return anything then return type will be "void". If define the function after the `main` function then define the prototype before the `main` function. Here syntax to write prototype : 

```c
data_type function(parameter_list);

// example ; 
int function(int x,int y); // it dose not require the same parameter name to defination of function and prototype function
void function(int,int); // it ok if dose not write parameter name in prototype
```

Here example of function : 
```c
#include <stdio.h>

double add(double num1,double num2){
    double sum = num1 + num2;
    return sum;
}

int main(){
    double a,b, c;

    a = 2.8;
    b = 2.7;
    c = add(a,b);

    printf("%lf\n",c);
    return 0;
}

/*
Output : 
5.500000
*/
```

Here another function example ; 
```c
#include <stdio.h>

double add(double x,double y);

int main(){
    double a = 2.8, b = 2.7, c;

    c = add(a,b);
    printf("%lf\n",c);

    return 0;
}

double add(double n1, double n2){
    double sum = n1 + n2;
    return sum;
}

/*
Output : 
5.500000
*/
```

Try to change variable value in function prototype : 
```c
#include <stdio.h>

int test_function(int x){
    int y = x;
    x = 2 * y;
    return (x*y);
}

int main(){
    int x = 10, y = 20, z = 30;

    z = test_function(x);
    printf("%d %d %d\n",x,y,z);

    return 0;
}

/*
Output : 
10 20 200
*/
```

Exampe of passing array in function argument : 
```c
#include <stdio.h>

int find_max(int ara[],int n);
int find_min(int ara[],int n);
int find_sum(int ara[],int n);
double find_average(int ara[],int n);

int main(){
    int ara[] = {
        -100,0, 53, 22, 83, 23, 89, -132, 201, 3, 85
    };
    int n = 11;

    int max = find_max(ara,n);
    printf("%d\n",max);

    return 0;
}

int find_max(int ara[],int n){
    int max = ara[0];
    int i;

    for(i  = 0;i < n;i++){
        if(ara[i] > max){
            max = ara[i];
        }
    }

    return max;
}

int find_min(int ara[],int n){
    int min = ara[0];
    int i;

    for(i = 0;i < n; i++){
        if(ara[i] < min){
            min = ara[i];
        }
    }

    return min;
}

int find_sum(int ara[],int n){
    int sum = 0;
    int i;

    for(i = 0; i < n;i++){
        sum = sum + ara[i];
    }

    return sum;
}

double find_average(int ara[],int n){
    int sum = find_sum(ara,n);
    double average = ((double)sum) / ((double)n);
    return average;
}
```

Try to change array value in function : 
```c
#include <stdio.h>

void test_fucntion(int ara[]){
    ara[0] = 100;
}

int main(){
    int ara [] = {1,2,3,4,5};

    printf("ara[0] : %d\n",ara[0]);
    test_fucntion(ara);
    printf("ara[0] : %d\n",ara[0]);
    return 0;
}

/*
Output : 
ara[0] : 1
ara[0] : 100
*/
```

<hr />
<br />

[< Chapter 06: Array](./../chapter_06/chapter_06.md) | [Part 1](./../part_1.md) | [Chapter 08: Binary Search >](./../chapter_08/chapter_08.md)
----------------------------------