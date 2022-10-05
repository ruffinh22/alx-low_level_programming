# 0x08. C - Static libraries
## About
An introductory project on:
- static libraries, how they work, how to create one, and how to use them
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
## File Descriptions
**[libmy.a](libmy.a)** - archive library containing various functions from previous projects.
 
- First create the libmy.a file by running the following command:
```bash
   ar rc libmy.a
```
- Secondly create ou copier les fichiers 0-isupper.c  1-isdigit.c  2-strlen.c   3-strcmp.c   5-strstr.c  _putchar.c 0-memset.c   1-memcpy.c 2-strncpy.c  3-strspn.c   6-abs.c 0-strcat.c   1-strncat.c  3-islower.c  4-isalpha.c  9-strcpy.c
100-atoi.c   2-strchr.c   3-puts.c 4-strpbrk.c of the previous projects (0x02-functions_nested_loops 0x03-more_functions_nested_loops 0x04-pointers_arrays_strings 0x05-pointers_arrays_strings 0x06-pointers_arrays_strings)
- Then compile all these files to have the *.o executables with the command:

```bash
   gcc -c *.c
```
- Copy the *.o files in libmy.a with the command:
```bash
   ar cr libmy.a *.o
```

**[main.h](main.h)** - header file with all of the prototypes for [libmy.a](libmy.a).

**[create_static_lib.sh](create_static_lib.sh)** - script that creates a static library, `liball.a` with all of the functions listed in [main.h](main.h).

