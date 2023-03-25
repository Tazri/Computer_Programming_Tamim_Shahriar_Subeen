Chapter 07: More Pointer
========================
This chapter contians : 

- **[Memory Allocation](#memory-allocation)**
- **[Calculate Pointer](#calculate-pointer)**
- **[Void Poitner](#void-pointer)**
- **[Function Pointer](#function-pointer)**
- **[qsort and bsearch](#qsort-and-bsearch)**

---------------------------------------------------------------------------------------------------------------------------------------------

## Memory Allocation
Here this chapter describe two function for memory allocation : 

- *malloc*
- *free*

**Malloc function :**
```c
⚙️ function malloc
// prototype
void * malloc (size_t size);

input : 
size_t size : how many byte take as number.
return value : 
void * : return address as void pointer 

This function has inside the stdlib.h header folder.
```

**Free function :**
```c
⚙️ function free
// prototype
void free(void *ptr);

input : 
void *ptr : address of memory which is allocate by malloc, calloc functio.

return value :  
nothing to return

work : 
free the allocate memory

This function has inside the stdlib.h header folder.
```

**Example of use malloc function :**
```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *marks;
    int i,n;
    printf("Please enter the number of the students : ");
    scanf("%d",&n);

    // now allocate memory
    marks = (int *)malloc(sizeof(int)*n);

    printf("Enter the marks for each student : \n");
    for(i = 0;i < n;i++){
        scanf("%d",&marks[i]);
    }

    printf("Now here you can see the values : \n");
    // now print the marks array
    for(i = 0;i < n;i++){
        printf("%d\n",marks[i]);
    }

    return 0;
}

/*
Output : 
Please enter the number of the students : 3
Enter the marks for each student : 
3
4
5
Now here you can see the values : 
3
4
5
*/
```

**Example of using free function :**
```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *marks;
    int i,n;
    printf("Please enter the number of students : ");
    scanf("%d",&n);

    // allocate the memory
    marks = (int *)malloc(sizeof(int)*n);

    if(marks == NULL){
        printf("Memory allocation failed for marks\n");
        return 1;
    }

    printf("Enter the marks for each student : \n");
    for(i = 0;i < n;i++){
        scanf("%d",&marks[i]);
    }

    printf("Now here you can see the values: \n");
    for(i = 0;i < n;i++){
        printf("%d\n",marks[i]);
    }

    // now free the memory
    free(marks);

    return 0;
}

/*
Output : 
Please enter the number of students : 3
Enter the marks for each student : 
34 56 11
Now here you can see the values: 
34
56
11
*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## Calculate Pointer
**It is possible to access next pointed data by add number with pointer. Here is example :**
```c
#include <stdio.h>

int main(){
    char *p, a = 10;
    int *q,b = 'F';
    double *r,c = 302.64;

    p = &a;
    q = &b;
    r = &c;

    printf("Size of char : %d byte\n",sizeof(char));
    printf("p : %p\n",p);
    printf("p+1 : %p\n",p+1);
    printf("P+2 : %p\n",p+2);

    printf("Size of int : %d byte\n",sizeof(int));
    printf("q : %p\n",q);
    printf("q+1 : %p\n",q+1);
    printf("q+2 : %p\n",q+2);


    printf("Size of double : %d byte\n",sizeof(double));
    printf("r : %p\n",r);
    printf("r+1 : %p\n",r+1);
    printf("r+2 : %p\n",r+2);

    return 0;
}

/*
Output : 
Size of char : 1 byte
p : 0x7fff8f48b6c7
p+1 : 0x7fff8f48b6c8
P+2 : 0x7fff8f48b6c9
Size of int : 4 byte
q : 0x7fff8f48b6c0
q+1 : 0x7fff8f48b6c4
q+2 : 0x7fff8f48b6c8
Size of double : 8 byte
r : 0x7fff8f48b6b8
r+1 : 0x7fff8f48b6c0
r+2 : 0x7fff8f48b6c8
*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## Void Pointer
A pointer which is declare with `void` keyword called void pointer. It use for pointed any kind of variable. Here is example : 

> 🔴 Type cast is must necessary when void pointer store into another pointer.

```c
#include <stdio.h>

int main(){
    void *vp;
    int n = 10;
    
    vp = &n;

    printf("Address of n : %p\n",&n);
    printf("Value of vp : %p\n",vp);
    printf("Content of vp : %d\n",*((int *)vp));
    return 0;
}

/*
output : 
Address of n : 0x7fffa40d37f4
Value of vp : 0x7fffa40d37f4
Content of vp : 10
*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## Function Pointer
Syntax of declare function pointer in c :
```c
return_type (*function_name)(parameter_prototype);

// example
int (*op)(int ,int);

// we can access function address by function name or using & operator before function name.
```

**Example of function pointer :**
```c
#include <stdio.h>

int add(int n1,int n2){
    return n1 + n2;
}

int sub(int n1,int n2){
    return n1 - n2;
}

int main(){
    // function pointer
    int (*fnc)(int,int);
    int n1 = 10,n2 = 20;
    
    fnc = &add;

    printf("Result : %d\n",fnc(n1,n2));
    
    fnc = &sub;
    printf("Result : %d\n",fnc(n1,n2));

    return 0;
}

/*
Output : 
Result : 30
Result : -10
*/
```

**It is possible to make higher order function using function poitner as a parameter :**
```c
#include <stdio.h>

int add(int a,int b){ return a + b; };
int sub(int a,int b){ return a - b; };

int operate(int (*op)(int,int),int a,int b){
    return op(a,b);
}

int main(){
    printf("operate(add,10,5) : %d\n",operate(add,10,5));
    printf("operate(&sub,10,5) : %d\n",operate(&sub,10,5));
    return 0;
}

/*
output : 
operate(add,10,5) : 15
operate(&sub,10,5) : 5
*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## qsort and bsearch

There is discribe two function : 

```c
⚙️ function qsort from stdlib

// prototpye
void qsort(void *base,size_t nitems,size_t size,int (*compar)(const void *,const void*));

input : 
void *base : address of first element of array.
size_t nitems : Total element of in array.
size_t size : size of single element of array.
int (*compar)(const void *,const void*) : a function which take a two void pointer and return a integer.
```

Example of qsort :
```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int i,n = 5;
    int values[] = {65,6,100,1,250};

    qsort(values,n,sizeof(n),compare);

    for(i = 0;i < n;i++){
        printf("%d ",values[i]);
    }

    printf("\n");
    return 0;
}
```

Another function :
```c
⚙️ function bsearch from stdlib

// prototype
void *bsearch(const void *key,const void *base,size_t nitems,size_t size,int (*compar)(const void*,const void *));

input : 
const void *key : Address of variable which is searching in arra.
const void *base : Array.
size_t nitems : Total element of in array.
size_t size : A size of a single element of array.
int (*compar)(const void *,const void *) : A function which compare two element.

return :
return a void address of element in array which is same with *key. Otherwise return NULL.
```

**Example of using bsearch :**
```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void * a,const void *b){
    return (*(int *)a-*(int*)b);
}

int main(){
    int key,*item,n=5;
    int values[] = {1,2,5,8,10};

    while(1){
        printf("Enter the value of the key (0 to exit) : ");
        scanf("%d",&key);

        if(key == 0){
            break;
        }

        item = (int *) bsearch(&key,values,n,sizeof(int),compare);

        if(item != NULL){
            printf("Item found : %d\n",*item);
        }else{
            printf("Item not found in array\n");
        }
    }

    return 0;
}

/*
Output : 
Enter the value of the key (0 to exit) : 5
Item found : 5
Enter the value of the key (0 to exit) : 8
Item found : 8
Enter the value of the key (0 to exit) : 10
Item found : 10
Enter the value of the key (0 to exit) : 1
Item found : 1
Enter the value of the key (0 to exit) : 9
Item not found in array
Enter the value of the key (0 to exit) : 0
*/
```
<hr />
<br />

#### [< Chapter 6: Structure and Union](./../chapter_06/note.md) | [Part 2](./../part_2.md) | [Chapter 8: Some More Fun Program >](./../chapter_08/note.md)