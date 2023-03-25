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
