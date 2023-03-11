/*
Before run this program must exist
a image at "./text/anonymo.png";
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // open the ./text/anonymo.png file in rb mode
    FILE *fp_in;
    char *input_file = "./text/anonymo.png";
    fp_in = fopen(input_file,"rb");
    if(fp_in == NULL){
        perror("> File opening Failed.\n");
        return EXIT_FAILURE;
    }

    // set indicator position to end
    fseek(fp_in,0,SEEK_END);

    // ftell return byte where is indicator now from start
    // to end.
    printf("> File Size : %ld bytes\n",ftell(fp_in));
    printf("> File Size (KiloByte) : %ld KB\n",ftell(fp_in)/1024);

    fclose(fp_in);

    return 0;
}

/*
Output : 
> File Size : 1205158 bytes
> File Size (KiloByte) : 1176 KB
*/