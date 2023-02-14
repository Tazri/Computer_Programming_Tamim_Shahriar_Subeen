Chapter 01 : First Program 
==========================

The first part of this chapter discuss about the how to install the code block on windows machine. Then write a first program. This is : 

```c
#include <stdio.h>

int main(){
    printf("Hello, World!");
    return 0;
}
```

The output : 
```
Hello, World!
```

Description about first code : 

**First Line :**
```c
#include <stdio.h>
```

This line include the header file `stdio.h`. Here describe some important input output functionality like `printf()` function.

**Second Line :**
Empty. Becuase for look clean. Nothing else.

**Third Line :**
```c
int main()
```

This is called main function. C program start from **main** function. Main function start by second starting braces **{** and end with second ending braces **}**.


```c
int main(){
    // the code is start here

    return 0;
}
```

**Fourth Line :**
```c
printf("Hello, World!");
```

This is a called statement. Here `printf()` is a function. Which is use for something print on screen. How to print something on screen this function written in `stdio.h` file. This type of file called header file. The line end with `;` semicolon. Every statement end with semicolon `;` in c program.

**Line number Five :**
```c
return 0;
```

This is a statement. That's why it end with semicolon. If by mistake to put a semicolon then compiler throw a error.

Notice that, statement inside the main function starting with 4 space or one tab. This is called indention. Indention make code clean and readable. This is not necessary. The code run with out indention. But put a indention to make a code clean is good practice.

<hr />
<br />

[< Chapter 00:Before the start](./../chapter_00/chapter_00.md) | [Part 1](./../part_1.md) | [Chapter 02:Data Tpye, Input and Output >](./../chapter_02/chapter_02.md)
-----------------------