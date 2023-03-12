#include <stdio.h>

#define true 1
#define false 0
int calls = 0;

void print_arr(int arr[],int size){
    int is_first_gone = false;
    int i;
    printf("arr{");
    for(i = 0;i < size;i++){
        if(!is_first_gone){
            is_first_gone = true;
            printf("%d",arr[i]);
        }else{
            printf(", %d",arr[i]);
        }
    }
    printf("}(%d)\n",size);
}

int is_all_choose(int map[],int size){
    int i;
    for(i = 0;i < size;i++){
        if(map[i] == false){
            return false;
        }
    }

    return true;
}

void print_permutation(int map[],int arr[],int stack[],int size,int pos){
    if(size <= pos){
        print_arr(stack,size);
        return;
    }

    int i;
    for(i = 0;i < size;i++){
        if(map[i] == 0){
            map[i] = 1;
            stack[pos++] = arr[i];
            print_permutation(map,arr,stack,size,pos);
            map[i] = 0;
            pos--;
        }
    }
}



int main(){
    int size = 10;
    int arr[10];
    int map[10];
    int stack[10];
    int i;
    printf("> Enter Your ten size of array : \n");
    for(i = 0;i <10;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
        map[i] = 0;
    }

    print_permutation(map,arr,stack,size,0);
    return 0;
}