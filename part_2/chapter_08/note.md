Chapter 8: Some more fun program
=================================

## Time Mesurement 

```c
#include <stdio.h>
#include <time.h>

void fnc(int x,int n){
    x = n*2;
}

int main(){
    int i,j,x,n;
    clock_t start_time,end_time;
    double time_elapsed;

    start_time = clock();

    n = 12345678;

    for(i = 0;i < 1000000000;i++){
        for(j = 0;j < 10;j++){
            x = n *2;
        }
    }

    end_time = clock();

    time_elapsed = (double)(end_time - start_time)/CLOCKS_PER_SEC;

    printf("Time for non function called : %lf seconds\n",time_elapsed);
    
    n = 12345678;
    for(i = 0;i < 1000000000;i++){
        for(j = 0;j < 10;j++){
            fnc(x,n);
        }
    }

    end_time = clock();
    time_elapsed = (double)(end_time - start_time)/ CLOCKS_PER_SEC;

    printf("Time for function called : %lf seconds\n",time_elapsed);

    return 0;
}

/*
Output : 
Time for non function called : 20.019568 seconds
Time for function called : 67.381766 seconds

*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## Random Number : 


```c#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i = 0;i < 5;i++){
        printf("%d\n",rand());
    }

    return 0;
}

/*
first round output : 
1804289383
846930886
1681692777
1714636915
1957747793

second round output : 
1804289383
846930886
1681692777
1714636915
1957747793
*/

same output because seed are not set
```

**Random number with set seed :**
```c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    time_t t;

    // srand mean seed which set the seed. 
    // rand function generate the number beased on seed
    srand(0); // fixed variable seed set. that why it produce same output all time.

    for(int i = 0;i < 5;i++){
        printf("%d\n",rand());
    }
    return 0;
}

/*
First Round Output : 
1804289383
846930886
1681692777
1714636915
1957747793

Second Round Output : 
1804289383
846930886
1681692777
1714636915
1957747793
*/
```

**Dynamic seed set :**
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned) time(&t)); // dynamically set seed with time.

    for(int i = 0;i < 5;i++){
        printf("%d\n",rand());
    }

    return 0;
}

/*
first round output : : 
182246839
1680750275
783398342
974255588
772408036

second round output : 
400751784
1495018759
1348789689
294246613
1666674472
*/
```

---------------------------------------------------------------------------------------------------------------------------------------------

## Make header file

Make header file with `.h` extention and custom header files are include with double qoutation rather than which angle bracket. Here is example : 

```c
int add(int n1,int n2){
    return n1 + n2;
}

int mul(int n1,int n2){
    return n1 *n2;
}
```

<hr />
<br />

#### [< Chapter 7: More Pointer](./../chapter_07/note.md) | [Part 2](./../part_2.md) | [Chapter 9: Misc>](./../chapter_09/note.md)