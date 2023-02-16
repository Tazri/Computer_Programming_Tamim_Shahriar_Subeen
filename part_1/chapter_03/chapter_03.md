Chapter 03: Conditional Logic
==============================
Syntax of `if else` block to apply conditional logic in programming : 

```c
if(condition){
    // if block
}else{
    // else block
}
```

Here if if condition true then if block work otherwise else block work. Here example : 

```c
#include <stdio.h>

int main(){
    int n = 10;

    n = 10;

    if(n >= 0){
        printf("The number is positive\n");
    }else{
        printf("The number is negative\n");
    }

    return 0;
}

/*
Output : 
The number is positive
*/
```

The code write this way as well : 
```c
#include <stdio.h>

int main(){
    int n;
    n = 10;

    if(n < 0){
        printf("The number is negative\n");
    }else{
        printf("The number is positive\n");
    }

    return 0;
}

/*
Output : 
The number is positive
*/
```

Here some operator will appear in if condition like <, >= etc. Those operator use compare the variable. Here all comparision operator : 

| operator     | name           |
|--------------|----------------|
| ==           | equal          |
| !=           | not equal      |
| >            | greater than   |
| <            | less than      |
| >=           | greater than and equal |
| <=           | less than and equal    |

The syntax of else if : 

```c
if(condition){
    // if block if 'if condition' is true.
}else if(condition){
    // else if block
    // if 'else if' condition true.
}else{
    // else block
    // if nothing is true.
}
```

we can use so many else if condition as we want.

Here the example : 
```c
#include <stdio.h>

int main(){
    int n = 10;

    if(n<0){
        printf("The number is negative\n");
    }else if (n > 0){
        printf("The number is positive\n");
    }else if (n == 0){
        printf("The number is zero!\n");
    }

    return 0;
}

/**
Output : 
The number is positive
*/
```

That's possible to use else block with else if condition : 

```c
#include <stdio.h>

int main(){
    int n = 10;

    if(n<0){
        printf("The number is negative\n");
    }else if (n > 0){
        printf("The number is positive\n");
    }else{
        printf("The numebr is zero!\n");
    }

    return 0;
}

/*
Output : 
The number is positive
*/
```

Is not neccessary to use `else` or `else if` when use `if` block. Here example : 

```c
#include <stdio.h>

int main(){
    int number = 12;

    if(number > 10){
        printf("The number is greater than ten\n");
    }
    
    return 0;
}

/*
Output : 
The number is greater than ten
*/
```

Here another example : 
```c
#include <stdio.h>

int main(){
    int n = 10;

    if(n < 30){
        printf("n is less than 30.\n");
    }else if (n < 50){
        printf("n is less than 50.\n");
    }

    return 0;
}

/*
Output : 
n is less than 30.
*/
```

We can too many if condition in one program. Here example : 
```c
#include <stdio.h>

int main(){
    int n = 10;

    if(n < 30){
        printf("n is less than 30.\n");
    }
    
    if(n < 50){
        printf("n is less than 50.\n");
    }

    return 0;
}

/*
Output : 
n is less than 30.
n is less than 50.
*/
```

> 🟢 the modulus operator use for figure out remainder. It's look like percentage sign : `%`.

Here the example with modulus operator : 

```c
#include <stdio.h>

int main(){
    int number, remainder;

    number = 5;

    remainder = number % 2;

    if(remainder == 0){
        printf("The number is even.\n");
    }else{
        printf("The number is odd.\n");
    }

    return 0;
}

/*
Output : 
The number is odd.
*/
```

In c, 'a' is greater than 'b', 'b' is greater than 'c'... 'y' is greater then 'z' Same as with capital letter. We can use to detect Lower and Upper case character.

```c
#include <stdio.h>

int main(){
    char ch = 'W';

    if(ch >= 'a' && ch <= 'z'){
        printf("%c is lower case\n",ch);
    }

    else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is upper case\n",ch);
    }

    return 0;
}

/*
Output : 
W is upper case
*/
```

Here we yse `&&` operator. Which is conditional operator. If condition is true only if both condition right and left of `&&` operator are true. Some more condition operator.

| Operator | Description                             |
|----------|-----------------------------------------|
|    &&    | and operator, work ony if all condition is true |
| \|\|     | or operator, work only if any condition is true |
|   !      | not operator, reverse the condition, if condition is true then make it false. If it false then make it true |

Here a program using `||` operator : 
```c
#include <stdio.h>

int main(){
    int num = 5;

    if(num >= 1 || num <= 10){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    return 0;
}
/*
Output :
yes
*/
```


Another program detect vowel : 
```c
#include <stdio.h>

int main(){
    char ch = 'b';

    if(ch == 'a' ||
       ch == 'e' ||
       ch == 'i' ||
       ch == 'o' ||
       ch == 'u'){
        printf("%c is vowel\n",ch);
       }else{
        printf("%c is consonant\n",ch);
       }

    return 0;
}

/*
Output : 
b is consonant
*/
```


<hr />
<br />

[< Chapter 02: Data Type, Input and output](./../chapter_02/chapter_02.md) | [Part 1](./../part_1.md) | [Chapter 04: Loop >](./../chapter_04/chapter_04.md)
------------------