Chapter 08: Binary Search
==========================

Here is the algorithm of binary search : 
1. mid = (low + high) / 2. here low is array first index and high is array last index
2. if value of mid and N is equal then goto step 5
3. if value of mid is lower than value of N then, low = mid + 1, goto step 1
4. if value of mid is higher than value of N then, high = mid - 1, goto step 1
5. Find the number is mid

Implementing of Binary search algorithm : 
```c
#include <stdio.h>

int main(){
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};

    int low_index = 0;
    int high_index = 15;
    int num = 97;

    int mid_index; 
    
    while(low_index <= high_index){
        mid_index = (low_index + high_index) /2 ;

        if(num == ara[mid_index]){
            // index found
            break;
        }

        if(num < ara[mid_index]){
            high_index = mid_index - 1;
        }

        else{
            // if ara[mid_index] > num
            low_index = mid_index + 1;
        }
    }

    if(low_index > high_index){
        printf("%d is not in the array\n",num);
    }else{
        printf("%d is found in the array. It is the %d th element of the array.\n",ara[mid_index],mid_index);
    }

    return 0;
}


/*
Output : 
97 is found in the array. It is the 13 th element of the array.
*/
```

<hr />
<br />

[< Chapter 07: Function](./../chapter_07/chapter_07.md) | [Part 1](./../part_1.md) | [Chapter 09: string >](./../chapter_09/chapter_09.md)
---------------------