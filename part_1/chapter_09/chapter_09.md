Chapter 09: string 
===================
String is one kind of character array in c. Which last character is `null('\0')` Here declare string syntax : 

```c
char str[size];
```

Example of string : 
```c
char country[] = {'B','a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h','\0'};

// or
char name[] = "Anonymo"
```

When print a string then use `%s` spacifier in `printf` function. Here example : 

```c
#include <stdio.h>

int main(){
    char country[] = {'B','a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h','\0'};

    printf("%s\n",country);

    return 0;
}

/*
Output : 
Bangladesh
*/
```

Another example : 
```c
#include <stdio.h>

int main(){
    char country[] = {'B', 'a', 'n', 'g','l','a','d','e','s','h',' ','i','s',' ','m','y',' ',
    'c','o','u','n','t','r','y','\0'};

    printf("%s\n",country);
    return 0;
}

/*
Output : 
Bangladesh is my country
*/
```

Another example where null value is in middle : 
```c
#include <stdio.h>

int main(){
    char country[] = {'B', 'a', 'n', 'g','l','a','d','e','s','h','\0','i','s',' ','m','y',' ',
    'c','o','u','n','t','r','y','\0'};

    printf("%s\n",country);
    return 0;
}

/*
Output : 
Bangladesh
*/
```

Sring Capitalizing : 
```c
#include <stdio.h>

int main(){
    char country[] = {'B','a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h','\0'};


    int i,length;

    printf("country : %s\n",country);

    length = 10;

    for(i = 0;i < length;i++){
        if(country[i] >= 97 && country[i] <= 122){
            country[i] = 'A' + (country[i] - 'a');
        }
    }

    printf("country : %s\n",country);

    return 0;
}

/*
Ouptut : 
country : Bangladesh
country : BANGLADESH
*/
```

Figure out string length function : 
```c
#include <stdio.h>

int string_length_one(char str[]){
    int i, length = 0;

    for(i = 0;str[i] != '\0';i++){
        length++;
    }

    return length;
}

// another way
int string_length_two(char str[]){
    int i ;
    for(i = 0;str[i] != '\0';i++);

    return i;
}

// another way
int string_length(char str[]){
    int i = 0;
    while(str[i]) i++;
    return i;
}

int main(){
    char country[100];

    int lenght;

    while(1 == scanf("%s",country)){
        lenght = string_length(country);
        printf("length: %d\n",lenght);
    }
    return 0;
}

/*
Bangladesh
length: 10
Country
length: 7
*/
```

> 🟢 `scanf` function return number how many input from user.

Here `gets` function use get string from user untill '\n' character. It return `NULL` when press `ctrl + D` in linux or press `ctrl+Z` in windows : 

```c
#include <stdio.h>

int main(){
    char ara[100];

    while(NULL != gets(ara)){
        printf("%s\n",ara);
    }

    return 0;
}

/*
Hello I am brea
Hello I am brea
do you know me ?
do you know me ?
wow it work
wow it work
*/
```

String concatanation example : 
```c
#include <stdio.h>

int main(){
    char str1[] = "Bangla", str2[] = "desh", str3[12];
    int i,j, length1 = 6, length2 = 4;

    for(i = 0,j = 0; i < length1;i++,j++){
        str3[j] = str1[i];
    }

    for(i = 0;i < length2;i++,j++){
        str3[j] = str2[i];
    }

    str3[j] = '\0';

    printf("%s\n",str3);
    return 0;
}

/*
Bangladesh
*/
```

String compare example : 
```c
#include <stdio.h>

int string_length(char str[]){
    int i = 0;
    while(str[i]) i++;
    return i;
}

int string_compare(char a[],char b[]){
    int i,j;

    for(i = 0; a[i] != '\0' && b[i] != '\0';i++){
        if(a[i] < b[i]){
            return -1;
        }
        if(a[i] > b[i]){
            return 1;
        }
    }

    if(string_length(a) == string_length(b)){
        return 0;
    }

    if(string_length(a) < string_length(b)){
        return -1;
    }

    // if string_length(a) > string_length(b)
    return 1;
}

int main(){

    return 0;
}
```

### Word Printing Problem : 
```c
#include <stdio.h>
#include <string.h>

// check is letter
int is_letter(char a){
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') ){
        return 1;
    }
    return 0;
}

// make upper
char make_upper(char a){
    if( a >= 'a' && a <= 'z'){
        return 'A' + (a - 'a');
    }

    return a;
}

int main(){
    int i,j,length, is_word_start;
    char str[1001];

    // get input
    printf("Enter you text : ");
    gets(str);

    length = strlen(str);
    is_word_start = 0;

    for(i = 0; str[i] != '\0';i++){
        // if is letter and is word is start
        if(is_word_start && is_letter(str[i])){
            printf("%c",str[i]);
        }

        // if is_word_start not and is_letter ok
        else if(!is_word_start && is_letter(str[i])){
            is_word_start = 1;
            printf("%c",make_upper(str[i]));
        }

        // if is not letter
        else if(!is_letter(str[i]) && is_word_start){
            
            printf("\n");
            is_word_start = 0;
        }
    }

    printf("\n");

    return 0;
}

/*
Enter you text : This is a test 9.9
This
Is
A
Test
*/
```

<hr />
<br />

[Chapter 08: Binary Search >](./../chapter_08/chapter_08.md) | [Part 1](./../part_1.md) | [Chapter 10: Prime Number >](./../chapter_10/chapter_10.md)
------------------------------------