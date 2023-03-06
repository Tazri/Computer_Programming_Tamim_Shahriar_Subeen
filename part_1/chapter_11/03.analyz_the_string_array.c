#include <stdio.h>
#include <string.h>

int main(){
    char saarc[7][100] = {
        "Bangladesh",
        "India",
        "Pakistan",
        "Sri Lanka",
        "Nepal",
        "Bhutan",
        "Maldives"
    };

    int row,col,name_length;

    for(row = 0;row < 7;row++){
        name_length = strlen(saarc[row]);

        for(col = 0;col < name_length;col++){
            printf("(%d,%d) = %c, ",row,col,saarc[row][col]);
        }

        printf("\n");
    }
    return 0;
}

/*
Output : 
(0,0) = B, (0,1) = a, (0,2) = n, (0,3) = g, (0,4) = l, (0,5) = a, (0,6) = d, (0,7) = e, (0,8) = s, (0,9) = h, 
(1,0) = I, (1,1) = n, (1,2) = d, (1,3) = i, (1,4) = a, 
(2,0) = P, (2,1) = a, (2,2) = k, (2,3) = i, (2,4) = s, (2,5) = t, (2,6) = a, (2,7) = n, 
(3,0) = S, (3,1) = r, (3,2) = i, (3,3) =  , (3,4) = L, (3,5) = a, (3,6) = n, (3,7) = k, (3,8) = a, 
(4,0) = N, (4,1) = e, (4,2) = p, (4,3) = a, (4,4) = l, 
(5,0) = B, (5,1) = h, (5,2) = u, (5,3) = t, (5,4) = a, (5,5) = n, 
(6,0) = M, (6,1) = a, (6,2) = l, (6,3) = d, (6,4) = i, (6,5) = v, (6,6) = e, (6,7) = s, 
*/