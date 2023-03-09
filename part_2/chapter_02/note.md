Chapter 2: Pointer
==================

**Important Note :**
- Pointer variable store the variable address.
- Syntax of declare a pointer is `datatype *pointer_name` example : `int *p`.
- Access variable address using `&`. Example : `&variable_name`
- Use `*` to access using poitner to  value of pointer pointed variable, syntax `*p`.
- When access value of pointed variable by using `*` called `dereferecing` Where `*` called is **Dereference Operator`.
- Using `%p` format spacifier to print variable address.
- It is possible to create pointer of pointer variable. Example : `int **p`
- `int **p` means p can store address of interger type pointer.
- It is possible to change variable value throw pointer. Example `*p = 20;` Where `p` point anoterh variable address.
- If pointer dose not point any thing called `null pointer.`
- Using `NULL` for create null pointer. Example : `int *p = NULL`.
- If try to store in pointer a address which is not allow by os then compiler throw `Segmentation fault` error.
- Try to accessing or changing `NULL` pointer value using dereference then compiler throw `Segmentation fault` error.
- We can store string using char pointer or create a string using char pointer. Example : `char *text = "example`.

**Program to example of printing variable address :**
```c
#include <stdio.h>

int main(){
    int x = 10;

    printf("Value of x is %d\n",x);
    printf("Address of x is %p\n",&x);

    return 0;
}

/*
Value of x is 10
Address of x is 0x7fffe79cc57c
*/
```

**Porgram to example pointer :**
```c
#include <stdio.h>

int main(){
    int x = 10;
    int *p;

    p = &x;

    printf("*p = %d\n",*p);
    printf("Value of p is %p\n",p);
    return 0;
}

/*
Output : 
*p = 10
Value of p is 0x7ffdde629894
*/
```

**Program to example of changing variable value by pointer :**
```c
#include <stdio.h>

int main(){
    int x =10;
    int *p;
    p = &x;

    printf("Value of x : %d\n",x);

    *p = 20; // chaning value by pointer

    printf("Value of x : %d\n",x);
    printf("Address of x : %p\n",&x);
    printf("Value of p : %p\n",p);

    return 0;
}

/*
Value of x : 10
Value of x : 20
Address of x : 0x7ffd4be51d74
Value of p : 0x7ffd4be51d74
*/
```

**Example of null poitner :**
```c
#include <stdio.h>

int main(){
    int x = 100;
    int *p = NULL;

    printf("Value of x : %d \n",x);
    
    // below line produce 'Segmentation fault'
    // beacuse p is null pointer
    printf("Value of *p : %d\n",*p);
}
```

**Porgram of example of string pointer :**
```c
#include <stdio.h>

int main(){
    char s[] = "Bangladesh";
    char *p;
    p = s;
    char *country = "Bangladesh";
    printf("Name of our countery is : %s\n",p);
    printf("*country : %s\n",country);
    return 0;
}

/*
Output : 
Name of our countery is : Bangladesh
*country : Bangladesh
*/
```

**Program of example of character pointer :**
```c
#include <stdio.h>

int main(){
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1,*p2,*p3;
    p1 = &c1;
    p2 = &c2;
    p3 = &c3;

    printf("%c, %c, %c\n",*p1,*p2,*p3);
    return 0;
}
```

**Proram of example of pointer of pointer :**
```c
#include <stdio.h>

int main(){
    char c = 'A';
    char *p,**q;

    p = &c;
    q = &p;

    printf("Value of c : %c\n",c);
    printf("Value of c by *p : %c\n",*p);
    printf("Value of c by **q : %c\n",**q);
    return 0;
}

/*
Output : 
Value of c : A
Value of c by *p : A
Value of c by **q : A
*/
```

<hr />
<br />

#### [< Chapter 1: Computer Memory](./../chapter_01/note.md) | [Part 2](./../part_2.md) | [Chapter 3: File >](./../chapter_03/note.md)