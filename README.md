# <p align="center">Printf function in C</p>

<p align="center">The printf function is a C language standard library function used to display text and data to standard output, usually the computer screen. This function allows you to display character strings and variables, as well as format the output according to given specifications</p>

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

# <p>Remarks</p>

- The printf function returns the number of characters successfully printed, or a negative value on error.

- The printf function is a variadic function, which means that it can accept a variable number of arguments.

- It is important to ensure that the number and type of arguments match the format specifiers used in the format string, otherwise this can result in undefined behavior.</p>


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


# <p>compilation commande</p>

**Your code will be compiled this way:**

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

# <p>Flowchart</p>

![Image](https://cdn.discordapp.com/attachments/1212359396739252225/1222206852117434438/IMG_2838.jpg?ex=66155fd5&is=6602ead5&hm=c136ebf98d35c9eb98e522f4af82afce007cc9c6f025ec5edb18867499c181a2&)

# <p align="center">Conclusion</p>

<p align="center">The printf function is a powerful and versatile function for displaying text and data in the C language. By using the appropriate format specifiers, it is possible to format the output in an accurate and readable manner.</p>


## Authors
#### *Stephanie Carvalho* / Github: [@Stefani-web](https://github.com/Stefani-web)
#### *Mohammad Nabi Guzarian* / Github: [@Nabi30](https://github.com/Nabi30)
