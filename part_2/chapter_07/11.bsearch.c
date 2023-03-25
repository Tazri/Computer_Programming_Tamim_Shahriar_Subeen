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