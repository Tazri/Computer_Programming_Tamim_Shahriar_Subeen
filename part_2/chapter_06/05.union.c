#include <stdio.h>

struct s {
    char ch;
    int n;
    char str[16];
} sv;

union u{
    char ch;
    int n;
    char str[16];
} uv;

int main(){
    int struct_size,union_size;

    struct_size = sizeof(sv);
    union_size = sizeof(uv);

    printf("Structure variable took %d bytes\n",struct_size);
    printf("Union variable took %d byte\n",union_size);

    return 0;
}

/*
Output : 
Structure variable took 24 bytes
Union variable took 16 byte
*/