# <p align="center">Printf function in C</p>

<p align="center">
    <img src="https://cdn.discordapp.com/attachments/1212359396739252225/1223786079686098985/printf.jpg?ex=661b1e9a&is=6608a99a&hm=2ff8261033aeeed1a181687b1f74ba41129b979b594a44435d835aa73f64deea&" alt="Project printf" />
</p>

# <p align="center">Project description</p>

<p align="center">This 3 person team project is part of the first year curriculum at Holberton School. For this project, we apply the following concepts: project approach, group projects, group programming and flowcharts. We will code a function similar to the printf function from the stdio.h library.</p>

<p align="center">What we should remember from this project:
      • How to use git as a team.
      • How to organize and share tasks between us.
      • Conflict resolution during git push.
      • Continue to learn the C language. And especially the secrets of the printf function.
      • Share our vision of the project and contribute equitably to it.</p>

--------------------------------------------------------------------------------

# <p>Requirements</p>

**General**
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account).
We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

# <p>Authorized functions and macros</p>

```
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)
```
# <p>Prototype</p>

```
int _printf(const char *format, ...)
```
# <p>Specifiers</p>

Format specifiers are used to indicate what type of data to display and how to display it. Here are some examples of common format specifiers:

```
- %c: print a character

- %s: print a character string

- % : floating point number

- %d: print a decimal integer

- %i: print an integer number
```

# <p>compilation commande</p>

**Your code will be compiled this way:**

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
# <p>Expected result</p>

```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```
# <p>Flowchart</p>

This image represents the action of our function:

![Image](https://cdn.discordapp.com/attachments/1222932112944922707/1223293218721103993/QQQQ.jpg?ex=66195397&is=6606de97&hm=c2ddcfaf18b17e96fabbfff4fb7a9d4fd7eb0d3851947b55bd1905ee517d57bd&)
*Nabi, Delphine and Stephanie*

--------------------------------------------------------------------------------

# <p>Man or Help</p>

[man_3_printf](https://github.com/Stefani-web/holbertonschool-printf/blob/main/man_3_printf)

![Image](https://cdn.discordapp.com/attachments/1212359396739252225/1224113811250876424/image_2.png?ex=661c4fd3&is=6609dad3&hm=2542eaed030ddb58a6c0133b218a84db86d0d3d3e8da7871bb36c4741d1c0cd1&)

--------------------------------------------------------------------------------

# <p>Files</p>
- [main.h](https://github.com/Stefani-web/holbertonschool-printf/blob/main/main.h)
- [_get_functions.c](https://github.com/Stefani-web/holbertonschool-printf/blob/main/_get_functions.c)
- [_print_char.c](https://github.com/Stefani-web/holbertonschool-printf/blob/main/_print_char.c)
- [_print_decimal.c](https://github.com/Stefani-web/holbertonschool-printf/blob/main/_print_decimal.c)
- [_print_percent.c](https://github.com/Stefani-web/holbertonschool-printf/blob/main/_print_percent.c)
- [_print_string.c](https://github.com/Stefani-web/holbertonschool-printf/blob/main/_print_string.c)
- [_printf.c](https://github.com/Stefani-web/holbertonschool-printf/blob/main/_printf.c)
- [_putchar.c](https://github.com/Stefani-web/holbertonschool-printf/blob/main/_putchar.c)

## Project Authors
#### *Stephanie Carvalho* / Github: [@Stefani-web](https://github.com/Stefani-web)
#### *Delphine Hannon* / Github :[@Delphine-H](https://github.com/Delphine-H)
#### *Mohammad Nabi Guzarian* / Github: [@Nabi30](https://github.com/Nabi30)

## ➤ License
Distributed under the MIT License. See [LICENSE](https://www.holbertonschool.com/) for more information. Copyright (C) <31/03/2024> copyright: Stephanie Carvalho, Delphine Hannon, Mohammad Nabi Guzarian.

--------------------------------------------------------------------------------
Project carried out within the framework of the school [Holberton School](https://www.holbertonschool.com/)
