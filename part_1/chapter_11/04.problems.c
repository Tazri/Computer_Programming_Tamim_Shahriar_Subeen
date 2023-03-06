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