#include <stdio.h>

int find_max(int ara[],int n);
int find_min(int ara[],int n);
int find_sum(int ara[],int n);
double find_average(int ara[],int n);

int main(){
    int ara[] = {
        -100,0, 53, 22, 83, 23, 89, -132, 201, 3, 85
    };
    int n = 11;

    int max = find_max(ara,n);
    printf("%d\n",max);

    return 0;
}

int find_max(int ara[],int n){
    int max = ara[0];
    int i;

    for(i  = 0;i < n;i++){
        if(ara[i] > max){
            max = ara[i];
        }
    }

    return max;
}

int find_min(int ara[],int n){
    int min = ara[0];
    int i;

    for(i = 0;i < n; i++){
        if(ara[i] < min){
            min = ara[i];
        }
    }

    return min;
}

int find_sum(int ara[],int n){
    int sum = 0;
    int i;

    for(i = 0; i < n;i++){
        sum = sum + ara[i];
    }

    return sum;
}

double find_average(int ara[],int n){
    int sum = find_sum(ara,n);
    double average = ((double)sum) / ((double)n);
    return average;
}