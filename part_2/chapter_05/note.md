Chapter 5: Bitwise Operator
====================

## Bitwise not operator.
Bitwise two complement opertor `~` are figure out binary two's complement of number. Here is simple example : 

```c
#include <stdio.h>

int main(){
    int a,b;

    a = 0;
    b = ~a;

    printf("a = %d, b = %d\n",a,b);

    a = 1;
    b = ~a;
    printf("a = %d, b = %d\n",a,b);
    return 0;
}

/*
a = 0, b = -1
a = 1, b = -2
*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## Bitwise Shift Operator
There are two binwise shift operator : 

### *Left Shift (<<) :*
`<<` shift operator shift the bit to left and fill by zero from right. Here is syntax : 

```c
num << how_many_bit_to_shift_left;
```

### *Right Shift (>>) :*
`>>` shift operator shift the bit to right and fill by zero from left. Here is sytnax : 
```c
num >> how_many_bit_to_shift_right;
```

**Here is the example of bitwise shift operator :**
```c
#include <stdio.h>

int main(){
    int n,x,m;

    while(1){
        printf("Please enter your number (0 to exit) : ");
        scanf("%d",&n);

        if(!n){
            break;
        }

        printf("How many bits you want to shift left and right ? ");
        scanf("%d",&x);

        m = n << x;
        printf("> %d << %d = %d\n",n,x,m);

        m = n >> x;
        printf("> %d >> %d = %d\n",n,x,m);

    }
    return 0;
}

/*
Please enter your number (0 to exit) : 9
How many bits you want to shift left and right ? 1
> 9 << 1 = 18
> 9 >> 1 = 4
Please enter your number (0 to exit) : 9
How many bits you want to shift left and right ? 3
> 9 << 3 = 72
> 9 >> 3 = 1
Please enter your number (0 to exit) : 9
How many bits you want to shift left and right ? 2
> 9 << 2 = 36
> 9 >> 2 = 2
Please enter your number (0 to exit) : 0
*/
```


-------------------------------------------------------------------------------------------------------------------------------------------

## Logical and operator
Logical `&` operator operate the **and** operation on two bit. Here is the example : 
```c
#include <stdio.h>

int main(){
    int n1 = 5, n2 = 6, n3;
    n3 = n1 & n2;
    printf("%d & %d = %d\n",n1,n2,n3);
    return 0;
}

/*
output : 
5 & 6 = 4

explain : 
5 -> 1 0 1
&    | | |
6 -> 1 1 0 
-----------
     1 0 0 -> 4
*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## Logical or operator
Logical `|` operator operate **or** operation on 2 bits of two number. Here is the example : 

```c
#include <stdio.h>

int main(){
    int n1=5,n2 = 6,n3;

    n3 = n1 | n2;
    printf("%d | %d = %d\n",n1,n2,n3);
    return 0;
}

/*
5 | 6 = 7

explain : 
5 ->  1 0 1
|(or) | | |
6 ->  1 1 0 
-----------
      1 1 1 -> 7
*/
```

--------------------------------------------------------------------------------------------------------------------------------------------

## Logical XOR operator
Logical `^` operator operate the **xor** operation on two bit of two numbers. Here is the example : 
```c
#include <stdio.h>

int main(){
    int n1 = 5, n2 = 6,n3;

    n3 = n1 ^ n2;
    printf("%d ^ %d = %d\n",n1,n2,n3);
    return 0;
}

/*
5 ^ 6 = 3
explain : 
5 ->   1 0 1
^(xor) | | |
6 ->   1 1 0 
-----------
       0 1 1 -> 3

1 if both bits are distinct otherwise 0
*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## Useage of Bitwise Operator

**Check is number odd or even using & operator :**
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n&1){ // if odd then it return 1 otherwise return 0
        printf("%d is odd\n",n);
    }else{
        printf("%d is even\n",n);
    }
    return 0;
}

/*
Output : 
15
15 is odd
*/
```

**Convert upper and lower letter using & and | operator :**
```c
#include <stdio.h>

char to_upper(char ch){
                    //      64  32  16  8   4   2   1
    return ch &95; // 95 -> 1   0   1   1   1   1   1
}

char to_lower(char ch){
                     //      64  32  16  8   4   2   1
    return ch | 32; // 32 -> 0   1   0   0   0   0   0
}

int main(){
    char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz";

    for(int i = 0;i < 26;i++){
        printf("Uppercase : %c, ", to_upper(str[i]));
        printf("Lowercase : %c\n",to_lower(str[i]));
    }
    return 0;
}
```

**Check the number is a result of power of two :**
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n > 0 && (n & (n-1)) == 0){
        printf("%d is a power of 2\n",n);
    }else{
        printf("%d is Not power of 2\n",n);
    }
    return 0;
}

/*
Output sample one :
128
128 is a power of 2

Output sample two : 
129
129 is Not power of 2
*/
```

**Figure out how many one exist in binary format :**
```c
#include <stdio.h>

int main(){
    int n,count = 0;

    printf("> Enter the n : ");
    scanf("%d",&n);

    while(n){
        if(n&1) count++;
        n >>= 1;
    }

    printf("> Total 1 is : %d\n",count);
    return 0;
}

/*
Sample output 1 :
> Enter the n : 31
> Total 1 is : 5

Sample output 2 : 
> Enter the n : 63
> Total 1 is : 6

Sample output 3 :
> Enter the n : 64
> Total 1 is : 1
*/

/************************ Another way **************************/

// #include <stdio.h>
// #include <limits.h>

// int main(){
//     int n = sizeof(int) * CHAR_BIT;
//     int i, count = 0,num;

//     scanf("%d",&num);
//     for(i = 0;i < n;i++){
//         if(num & (1 << i)) count ++;
//     }

//     printf("Number of 1 : %d\n",count);
//     return 0;
// }

/*
Output sample : 
63
Number of 1 : 6
*/
```

**Figure out is numbers equal using Xor :**
```c
#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    if(n^m){ // if two numebr equal then two number xor is 0
        printf("Numbers are not equal\n");
    }else{
        printf("Numbers are equal.\n");
    }
    return 0;
}

/*
Output Sample : 
32 32
Numbers are equal.

Output sample : 
32
31
Numbers are not equal
*/
```

**Find the unique number from array :**
```c
#include <stdio.h>

int main(){
    int i, size = 7;
    int ara[] = {1,2,3,4,1,2,3};
    int result = ara[0];

    for(i =1;i < size;i++){
        result ^= ara[i];
    }

    printf("Result = %d\n",result);
    return 0;
}

/*
Output : 
Result = 4
*/
```

------------------------------------------------------------------------------------------------------------------------------------------

## Problem

### [Find the 1 missing number in array using xor.](./problem/00.find_the_missing.c)
### [Find the 2 missing number in array using xor.](./problem//01.find_the_two_mising_number.c)

<hr />
<br />

#### [< Chapter 4: Recursion](./../chapter_04/note.md) | [Part 2](./../part_2.md) | [Chapter 6: Structure and Union >](./../chapter_06/note.md)