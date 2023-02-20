Chapter 06: Array
=================

Declare array syntax : 
```c
data_type array_name[size];
```

Accesing array Element : 
```c
array_name[index];
```

Array element index start with 0. When declared the array, the array fill with garbage value. Changing spacify element of array syntax is : 
```c
array_name[index] = value;
```

It possible to assigning array data when it declared. Here syntax : 
```c
data_type array_name[size] = {value,value,value};

// example : 
int ara[2] = {3,2};

// another example 
int ara[4] = {3,2}; // here other index fill with garbage

// another example
int ara[] = {3,2,2}; // here ara size determine automatically to 3
```

Exmaple of First Problem : 
```c
#include <stdio.h>

int main(){
    int ft_marks,st_marks,final_marks;
    double total_marks;

    ft_marks = 80;
    st_marks = 74;
    final_marks = 97;

    total_marks = ft_marks /4.0 + st_marks / 4.0 + final_marks / 2.0;

    printf("%0.0lf\n",total_marks);
    return 0;
}
```

Example on basic array : 
```c
#include <stdio.h>

int main(){
    int my_ara[10];

    printf("%d\n",my_ara[0]); // garbage value
    printf("%d\n",my_ara[9]); // garbage value

    return 0;
}

/*
0
32764
*/
```

Another example : 
```c
#include <stdio.h>

int main(){
    int my_ara[10] = {
        5,10,15,20,25,30,35,40,45,50
    };

    printf("%d\n",my_ara[0]);
    printf("%d\n",my_ara[9]);

    return 0;
}

/*
5
50
*/
```

Another exmaple : 
```c
#include <stdio.h>

int main(){
    int my_ara[10] = {5,10,15,20};

    printf("%d, %d\n",my_ara[0],my_ara[9]);

    return 0;
}

/*
5, 0
*/
```

Example of chaning array value :
```c
#include <stdio.h>

int main(){
    int ara[4] = {5, 10, 15, 20};

    ara[0] = 100;
    ara[2] = 200;
    ara[3] = 300;

    printf("%d, %d, %d, %d\n",ara[0],ara[1],ara[2],ara[3]);

    return 0;
}

/*
100, 10, 200, 300
*/
```

Array accessing Example : 
```c
#include <stdio.h>

int main(){
    int numbers[5] = {10,20,30,40,50};

    printf("First element: %d\n",numbers[0]);
    printf("Third element: %d\n",numbers[2]);

    return 0;
}

/*
First element: 10
Third element: 30
*/
```

Example of try to accessing out of the index of array :
```c
#include <stdio.h>

int main(){
    int ara[5] = {6, 7, 4, 6, 9};

    printf("%d\n",ara[-1]); // garbage value
    printf("%d\n",ara[5]); // garbage value
    printf("%d\n",ara[100]); // garbage value

    return 0;
}

/*
0
32765
2048029679
*/
```

Example of Traverse the array : 
```c
#include <stdio.h>

int main(){
    int ara[10] = {
        10, 20, 30, 40, 50, 60, 70, 80, 90, 100
    };
    int i;

    for(i = 0; i < 10;i++){
        printf("%dth element is: %d\n",i+1,ara[i]);
    }
    return 0;
}

/*
Output : 
1th element is: 10
2th element is: 20
3th element is: 30
4th element is: 40
5th element is: 50
6th element is: 60
7th element is: 70
8th element is: 80
9th element is: 90
10th element is: 100
*/
```

Example of reversing the problem : 
```c
#include <stdio.h>

int main(){
    int ara[] = {
        10,20,30,40,50,60,70,80,90,100
    };
    int i,j,temp;

    // reversing
    for(i = 0,j=9;i < (10/5);i++,j--){
        // swaping
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
    }

    // print all element
    for(i = 0;i < 10;i++){
        printf("ara[%d] = %d\n",i,ara[i]);
    }
    return 0;
}

/*
ara[0] = 100
ara[1] = 90
ara[2] = 30
ara[3] = 40
ara[4] = 50
ara[5] = 60
ara[6] = 70
ara[7] = 80
ara[8] = 20
ara[9] = 10
*/
```

Solve the last problem : 
```c
#include <stdio.h>

int main(){
    int ft_marks[40] = {83,86,97,95,93,95,86,52,49,41,
                        42,47,90,59,63,86,40,46,92,92,
                        56,87,89,65,63,45,20,41,23,63,
                        45,89,63,45,78,52,45,65,41,45};

    int st_marks[40] = {83,89,97,95,93,95,46,52,69,91,
                        62,45,90,56,38,96,30,46,92,92,
                        56,77,89,65,65,45,20,41,23,63,
                        45,79,63,45,78,52,45,55,41,45};

    int final_marks[40] = {83,39,47,95,93,95,46,52,69,91,
                           62,45,20,56,38,96,30,56,82,93,
                           56,77,89,65,95,45,20,41,73,63,
                           45,79,63,45,78,52,45,55,41,75};

    int i;
    int numbers[101];

    for(i = 0; i < 101;i++){
        numbers[i] = 0;
    }

    double total_marks[40];

    for(i = 0;i < 40;i++){
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;

        // list of numbers
        if(numbers[(int)total_marks[i]] != 0){
            numbers[(int)total_marks[i]]++;
        }else{
            numbers[(int)total_marks[i]] = 1;
        }
    }

    for(i = 1;i <= 40;i++){
        printf("Roll No: %d\t Total Marks: %0.0lf\n",i,total_marks[i-1]);
    }

    // report

    printf("The report : ");
    for(i = 1;i <= 100;i++){
        if(numbers[i] != 0){
            printf("Total students of got %d number is : %d\n",i,numbers[i]);
        }
    }

    return 0;
}
```

<hr />
<br />

[< Chapter 05: Little Much Math](./../chapter_05/chapter_05.md) | [Part 1](./../part_1.md) | [Chapter 07: Function >](./../chapter_07/chapter_07.md)
-------------------------