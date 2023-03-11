/*
before run this program must be has a
image file at ./text/anonymo.png

and must be exist this folder
'./text/copy/'

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp_in, *fp_out;
    char *input_file = "./text/anonymo.png";
    char *output_file = "./text/copy/anonymo2.png";
    int ch;

    // open the input file
    fp_in = fopen(input_file,"rb");
    if(fp_in == NULL){
        // throw error
        perror("> FILE opening failed <\n");
        return EXIT_FAILURE;
    }

    // open the output file
    fp_out = fopen(output_file,"wb");

    while(1){
        ch = fgetc(fp_in);
        if(ch == EOF){
            break;
        }
        fputc(ch,fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
    return 0;
}

/*
Produce a another same type image at ./text/copy/anonymo.png'
*/