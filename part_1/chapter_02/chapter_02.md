Chapter 02: Data Type, Input and Output
========================================

Variable is a something that where store a value. Here syntax to declare variable in c : 
```c
data_type variable_name = value ;
```

Here a code to sum a two variable : 

```c
#include<stdio.h>

int main(){
    int a;
    int b;
    int sum;

    a = 50;
    b = 60;

    sum = a+b;

    printf("Sum is %d",sum);

    return 0;
}
```

output : 
```
Sum is 110
```
Here **a**, **b** and **sum** is variable. First declare the variable. The line `int a;` describe to compiler that a is a variable and it store a integer variable. That why it start from **int** keyword. **int** is datatype.

The line `sum = a+b` meaning is that, adding value of a and b then store it in sum variable. 

The line `printf("Sum is %d",sum);` display the output of **sum** variable. Here to part of inside the printf function.

- `Sum is %d` then a comma **(,)**
- After the comma the word `sum`
  
The part `Sum is %d` mean print 'Sum is '. %d mean read the integer value and print it which is put the after the value..

We can write the same program in following way : 

```c
#include <stdio.h>

int main(){
    int a, b, sum;

    a = 50;
    b = 60;

    sum = a + b;

    printf("Sum is %d",sum);
    
    return 0;
}
```

Declare the variable in one line : 
```c
datatype variable_name, variable_name....;
```

We can assign a value wen declare the variable : 
```c
#include <stdio.h>

int main(){
    int a = 50, b = 60, sum;

    sum = a + b;

    printf("Sum is %d",sum);

    return 0;
}
```

Here another program : 
```c
#include <stdio.h>

int main(){
    int x,y;

    x = 1;
    y = x;
    x = 2;

    printf("%d",y);

    return 0;
}
```

The output : 
```
1
```

Another program : 
```c
#include <stdio.h>

int main(){
    int a = 50, b = 60, sum;

    sum = a + b;

    printf("%d + %d = %d",a,b,sum);

    return 0;
}
```

The output : 
```
50 + 60 = 110
```

Try to use decimal number or pointed number in same program : 

```c
#include <stdio.h>

int main(){
    int a = 50.45, b = 60, sum;

    sum = a + b;

    printf("%d + %d = %d",a,b,sum);

    return 0;
}
```

The output : 
```
50 + 60 = 110
```
> 🟢 '\n' character create a newline in console.

In c, for **int** type variable take 4 byte in memory. A integer type variable can store number in range -2147483648 to 2147483647.

Decalare the real number with `double` datatype. Here syntax : 

```c
double vairable_name = decimal_value;
```

So the program : 
```c
#include <stdio.h>

int main(){
    double a,b, sum;

    a = 9.8;
    b = 8.743;

    sum = a + b;

    printf("Sum is : %lf\n",sum);
    printf("Sum is : %0.2lf\n",sum);

    return 0;
}
```

The Output : 
```
Sum is : 18.543000
Sum is : 18.54
```

> 🟢 use %lf for print decimal value. %0.2lf for print value after 2 decimal value. If need 3 decimal value then use %0.3lf. If dose not need to print decimal value then use %0.0lf.

> 🟢 `double` type data take 64 bit memory.

Use `scanf` function to take a value from user. 

```c#include <stdio.h>

int main(){
    int a, b, sum;

    scanf("%d",&a);
    scanf("%d",&b);

    sum = a + b;

    printf("Sum is : %d\n",sum);

    return 0;
}
```

The output : 
```
56
78
Sum is : 134
```

Here `scanf("%d %d",&a);` the function tell them read the two value of interger type. Thats why use %d. Then the word `&a` and `&d` mean thats, after read the value then store it in variable **a** and **b**. 

If we forget the put &a then a error occur. This is : 

```
45
78
Segmentation fault
```
If user input double type data instead of integer data then use `%lf` instead of `%lf`.

Here another type of vairable is `char` type. `char` type data take a only one byte in memory. Use `%c` to print and read character type varibale. Here example : 

```c
#include <stdio.h>

int main(){
    char ch;

    printf("Enter the first letter of your name : ");

    scanf("%c",&ch);

    printf("The first letter of your name is : %c\n",ch);

    return 0;
}
```

The output : 
```
Enter the first letter of your name : A
The first letter of your name is : A
```

Another function to use get character type variable in char type data is `getchar()`. Here example : 

```c
#include <stdio.h>

int main(){
    char ch;

    printf("Enter the first letter of your name : ");

    ch = getchar();

    printf("The first letter of your name is : %c\n",ch);

    return 0;
}
```

The Output : 
```
Enter the first letter of your name : S
The first letter of your name is : S
```

Example of store a value in character type vairable : 
```c
char c = 'a';
```

Use single qoutation for character type value. Here another example : 

```c
#include <stdio.h>

int main(){
    int num1,num2;

    printf("Please enter a number : ");
    scanf("%d",&num1);

    printf("Please enter another number : ");
    scanf("%d",&num2);
    
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);

    return 0;
}
```

The output : 
```
Please enter a number : 45
Please enter another number : 5
45 + 5 = 50
45 - 5 = 40
45 * 5 = 225
45 / 5 = 9
```

Here another program : 
```c
#include <stdio.h>

int main(){
    int num1,num2, value;
    char sign;

    printf("Please enter a number : ");
    scanf("%d",&num1);

    printf("Please enter another number : ");
    scanf("%d",&num2);
    
    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n",num1,sign,num2,num1+num2);

    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n",num1,sign,num2,num1+num2);

    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n",num1,sign,num2,num1+num2);

    value = num1 / num2;
    sign = '/';
    printf("%d %c %d = %d\n",num1,sign,num2,num1+num2);


    return 0;
}
```

The Output : 
```
Please enter a number : 45
Please enter another number : 5
45 + 5 = 50
45 - 5 = 50
45 * 5 = 50
45 / 5 = 50
```

We can write something that not execute in program. It called comment. Here example : 

```
// single line comment.
/*
Multiline comment 
*/
```

Here program with example of comment : 
```c
#include <stdio.h>

int main(){
    // test program - comment 1
    printf("Hello, ");

    /* We have printed Hello, now we shall print World.
       Note that this is a multi-line comment */
       printf("World!"); // printed world

       return 0;
}
```

The output : 
```
Hello, World!
```

<hr />
<br />

[< Chapter 01: First Program](./../chapter_01/chapter_01.md) | [Part 1](./../part_1.md) | [Chapter 03: Conditional Logic >](./../chapter_03/chapter_03.md)
-----------------------