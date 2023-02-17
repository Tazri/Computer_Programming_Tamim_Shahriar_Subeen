#include <stdio.h>

int main(){
    int i,m;

    printf("Please enter the m : ");
    scanf("%d",&m);

    for(i = 10;i <= m;i++){
        if(i % 11 != 0){
            printf("%d\n",i);
        }
    }

    return 0;
}

/*
Ouptut : 
Please enter the m : 24
10
12
13
14
15
16
17
18
19
20
21
23
24
*/