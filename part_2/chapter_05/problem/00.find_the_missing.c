#include <stdio.h>

int main(){
    int n,i,res,num;
    printf("Enter 0 or 1 to exit.");
    while(1){
        printf("Enter total 1 to n, n = ");
        scanf("%d",&n);

        if(n == 0 || n == 1){
            printf(">Program terminate.<\n");
            break;
        }

        printf("Start to enter the number without missing : \n");
        res = n;
        for(i = 1;i < n;i++){
            scanf("%d",&num);
            res ^= num ^ i;
        }

        printf("The missing number is : %d\n",res);
    }
    return 0;
}

/*
Enter 0 or 1 to exit.Enter total 1 to n, n = 9
Start to enter the number without missing : 
1
3
2
8
9
6
5
4
The missing number is : 7
Enter total 1 to n, n = 0
>Program terminate.<
*/