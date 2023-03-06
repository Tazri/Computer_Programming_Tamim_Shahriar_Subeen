Chapter 11: Array Again
======================

**Syntax of Declare 2D array :**
```cpp
<data_type> <array_name> [number_of_rows][number_of_columns];

// example 
int marks[4][10];
```

**First Problem :**
```cpp
#include <stdio.h>

int main(){
    int marks[4][10] = {
        {80,70,92,78,58,83,85,66,99,81},
        {75,67,55,100,91,84,79,61,90,97},
        {98,67,75,89,81,83,80,90,88,77},
        {0,0,0,0,0,0,0,0,0,0}
    };

    int col;

    for(col = 0;col < 10;col++){
        marks[3][col] = marks[0][col] / 4.0 + marks[1][col] / 4.0 + marks[2][col] / 2.0;
        printf("Roll No : %d \t Total Marks : %d\n",col+1,marks[3][col]);
    }

    return 0;
}
```

**Store Namta in Array problem :**
```cpp
#include <stdio.h>

int main(){
    int namta[10][10];
    int row,col;

    for(row = 0;row < 10;row++){
        for(col = 0;col < 10;col++){
            namta[row][col] = (row+1)*(col+1);
        }
    }

    for(row = 0;row < 10; row++){
        for(col = 0;col < 10;col++){
            printf("%d x %d = %d\n",row+1,col+1,namta[row][col]);
        }
        printf("\n");
    }
    return 0;
}
```

**Example of store string in array :**
```c
#include <stdio.h>

int main(){
    char saarc[7][100] = {
        "Bangladesh",
        "India",
        "Pakistan",
        "Sri Lanka",
        "Nepal",
        "Bhutan",
        "Maldives"
    };

    int row;

    for(row = 0;row < 7;row++){
        printf("%s\n",saarc[row]);
    }

    printf("saarc[0][5] : %c\n",saarc[0][5]); // a
    printf("saarc[5][0] : %c\n",saarc[5][0]); // B


    return 0;
}
```

**Example of printing every character of string from string array :**
```c
#include <stdio.h>
#include <string.h>

int main(){
    char saarc[7][100] = {
        "Bangladesh",
        "India",
        "Pakistan",
        "Sri Lanka",
        "Nepal",
        "Bhutan",
        "Maldives"
    };

    int row,col,name_length;

    for(row = 0;row < 7;row++){
        name_length = strlen(saarc[row]);

        for(col = 0;col < name_length;col++){
            printf("(%d,%d) = %c, ",row,col,saarc[row][col]);
        }

        printf("\n");
    }
    return 0;
}

/*
Output : 
(0,0) = B, (0,1) = a, (0,2) = n, (0,3) = g, (0,4) = l, (0,5) = a, (0,6) = d, (0,7) = e, (0,8) = s, (0,9) = h, 
(1,0) = I, (1,1) = n, (1,2) = d, (1,3) = i, (1,4) = a, 
(2,0) = P, (2,1) = a, (2,2) = k, (2,3) = i, (2,4) = s, (2,5) = t, (2,6) = a, (2,7) = n, 
(3,0) = S, (3,1) = r, (3,2) = i, (3,3) =  , (3,4) = L, (3,5) = a, (3,6) = n, (3,7) = k, (3,8) = a, 
(4,0) = N, (4,1) = e, (4,2) = p, (4,3) = a, (4,4) = l, 
(5,0) = B, (5,1) = h, (5,2) = u, (5,3) = t, (5,4) = a, (5,5) = n, 
(6,0) = M, (6,1) = a, (6,2) = l, (6,3) = d, (6,4) = i, (6,5) = v, (6,6) = e, (6,7) = s, 
*/
```
**Solution of last Problem :**
```c
#include <stdio.h>

int main(){
    int tables[5][5] = {
        {6,4,7,8,9},
        {3,7,1,9,9},
        {8,6,4,2,7},
        {2,4,2,5,9},
        {4,1,6,7,3}
    };

    int row_sum[5] = {0,0,0,0,0};
    int col_sum[5] = {0,0,0,0,0};

    int row,col;

    for(row = 0;row < 5;row++){
        for(col = 0;col < 5;col++){
            row_sum[row] += tables[row][col];
            col_sum[col] += tables[row][col];
        }
    }

    // printing row sum
    printf("> Sum of Rows Number : <\n");
    for(row = 0;row < 5;row++){
        printf("Sum of row %d: %d\n",row,row_sum[row]);
    }

    // printing col sum
    printf("\n>Sum of Cols numbers : <\n");
    for(col = 0;col < 5;col++){
        printf("Sum of col %d: %d\n",col,col_sum[col]);
    }
    return 0;
}

/*
Output : 
> Sum of Rows Number : <
Sum of row 0: 34
Sum of row 1: 29
Sum of row 2: 27
Sum of row 3: 22
Sum of row 4: 21

>Sum of Cols numbers : <
Sum of col 0: 23
Sum of col 1: 22
Sum of col 2: 20
Sum of col 3: 31
Sum of col 4: 37
*/
```


<hr/ >

[< Chapter 10: Prime Number ](./../chapter_10/chapter_10.md) | [Part 1](./../part_1.md) | [Chapter 12: Binary Number >](./../chapter_12/chapter_12.md)
-----------------------------------