#include <stdio.h>

#define true 1
#define false 0
typedef short bool;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_arr(int arr[],int size){
    int i;
    bool is_first = true;
    printf("array (");

    for(i = 0;i < size;i++){
        if(is_first){
            printf("%d",arr[i]);
        }else{
            printf(", %d",arr[i]);
        }

        if(is_first){
            is_first = false;
        }
    }

    printf(")\n");
}

void sort(int arr[],int size,bool accending){
    int i,j;
    int select;

    for(i = 0;i < size;i++){
        select = i;
        
        if(accending){
            for(j = i+1;j < size;j++){
                if(arr[j] < arr[select]){
                    select = j;
                }
            }
        }else{
            for(j = i+1;j < size;j++){
                if(arr[j] > arr[select]){
                    select = j;
                }
            }
        }

        if(select != i){
            swap(&arr[i],&arr[select]);
        }

    }
}

void get_arr(int arr[],int size){
    int i;
    for(i = 0;i < size;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
        getchar();
    }
}


int main(){
    int size;

    printf("Please enter the array size : ");
    scanf("%d",&size);
    getchar();

    // making arr
    int arr[size];
    get_arr(arr,size);

    printf("\n>> Your arr : \n");
    print_arr(arr,size);

    // sort the array
    printf("\n>> After sort your array : \n");
    printf("> Accending : \n");
    sort(arr,size,true);
    print_arr(arr,size);
    printf("> Decending : \n");
    sort(arr,size,false);
    print_arr(arr,size);

    printf("\n> Proram Terminate <\n");
}

/*
Output : 
Please enter the array size : 5
arr[0] : 3
arr[1] : 4
arr[2] : 2
arr[3] : 1
arr[4] : 5

>> Your arr : 
array (3, 4, 2, 1, 5)

>> After sort your array : 
> Accending : 
array (1, 2, 3, 4, 5)
> Decending : 
array (5, 4, 3, 2, 1)

> Proram Terminate <
*/