Chapter 04: Loop
===============


A program print 1 to 10 : 

```c
#include <stdio.h>

int main(){
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");
    return 0;
}

/*
Output : 
1
2
3
4
5
6
7
8
9
10
*/
```

A program print 1 to 10, another way : 

```c
#include <stdio.h>

int main(){
    printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n");
    
    return 0;
}
```

## While loop

We do this type of repeated work with loop. Here syntax of while loop : 

```c
while (Condition){
    // while state mentment block
    // this block always executing unill 
    // condition is false
}
```

Print again one to ten but this time using while loop : 
```c
#include <stdio.h>

int main(){
    int n = 1;

    while(n <= 1){
        printf("%d\n",n);

        n++; // it equivelent of  n = n + 1;
    }

    return 0;
}
```

If condition is never going to false then create  a infinite loop. Here example : 
```c
#include <stdio.h>

int main(){
    int n = 1;

    while(n <= 10){ // this condition truth forever
        printf("%d\n",n); // thats why it make it infinite loop
    }

    n++;// this condition outside the loop
    return 0;
}
```

## break Statement

`break` keyword stop the loop. When program found the break then it stop the loop. Here example  ;
```c
#include <stdio.h>

int main(){
    int n = 1;

    while(n <= 100){
        printf("%d\n",n);
        n++;

        if(n > 10){
            break; // break the loop
        }
    }

    return 0;
}
```

## continue Statement
`continue` statement skip the iteration and jump to the next loop iteration. Here example to print odd number in 1 to 10 : 

```c
#include <stdio.h>

int main(){
    int n = 0;

    while(n < 10){
        n = n + 1;

        if(n % 2 == 0){
            continue;
        }

        printf("%d\n",n);
    }

    return 0;
}

/*
Output : 
1
3
5
7
9
*`/
```

Printing namta of 5 by using loop : 
```c
#include <stdio.h>

int main(){
    int n = 5;
    int i = 1;

    while(i <= 10){
        printf("%d X %d = %d\n",n,i,n*i);
        i = i + 1;
    }

    return 0;
}

/*
Output : 
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
*/
```

## for loop

Here is the for loop syntax : 
```c
for(initialization;condition;inrement/decrement){
    // for loop block
}
```

Here printing namta of 5 using for loop again : 
```c
#include <stdio.h>

int main(){
    int n = 5;
    int i;

    for(i = 1;i < 10;i = i + 1){
        printf("%d X %d = %d\n",n,i,n*i);
    }

    return 0;
}
```

In dose not necessary to write every 3 part in for loop. 

```c
for(;;){
    // creating infinite loop
}
```

Below again print namta but using infinite loop : 
```c
#include <stdio.h>

int main(){
    int n = 5;
    int i = 1;

    for(;;){
        if(i > 10){
            break;
        }

        printf("%d X %d = %d\n",n,i,n*i);
        i = i + 1;
    }

    return 0;
}
```

Now printing namta of 5 but in this case, do that only using addition, skip multiplication : 
```c
#include <stdio.h>

int main(){
    int m,n = 5;
    int i;

    m = 0;

    for(i = 1;i <= 10;i = i + 1){
        m = m + n;
        printf("%d X %d = %d\n",n,i,m);
    }

    return 0;
}
```

printing 1 to 20 namta using for loop : 
```c
#include <stdio.h>

int main(){
    int n,i;

    for(n = 1;n <= 20;n = n + 1){
        for(i = 1;i <= 10; i = i + 1){
            printf("%d X %d = %d\n",n,i,n*i);
        }
    }
    return 0;
}
```

## Permutation Problem

```c
#include <stdio.h>

int main(){
    int a,b,c;

    for(a = 1; a <= 3; a++){
        for(b = 1; b <= 3; b++){
            if(a != b){
                for(c = 1;c <= 3;c++){
                    if(c != b && c != a){
                        printf("%d %d %d\n",a,b,c);
                    }
                }
            }
        }
    }

    return 0;
}

/*
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/
```

Another way : 
```c
#include <stdio.h>

int main(){
    int a,b,c;

    for(a = 1;a <= 3;a++){
        for(b = 1;b <= 3;b++){
            for(c = 1;c <= 3;c++){
                if(b!= a && c != a && c != b){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }

    return 0;
}
```

<hr />
<br />

[< Chapter 03: Conditional Logic](./../chapter_03/chapter_03.md) | [Part 1](./../part_1.md) | [Chapter 05: Little Much Math >](./../chapter_05/chapter_05.md)
---------------------