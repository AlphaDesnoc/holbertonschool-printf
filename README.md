# Holbertonschool - printf

This is a new project to create a custom function _printf of the standard function printf in C language. This custom function handle the conversion specifiers to display a character, a string, a percent or an integer. 

## Conversion specifiers

| **Conversion specifiers** 	| **Data type** 	|
|---------------------------	|---------------	|
|             %c            	|      char     	|
|             %s            	|     string    	|
|             %%            	|    percent    	|
|             %i            	|    integer    	|
|             %d            	|    integer    	|


## Installation - Configuration

First, create a repository on your github and clone the link with your terminal.
Then, the best thing would be to create a flowchart to give your code a guideline.
You add a main function and a header file to introduce the library and all the functions called, and start creating your custom function _printf.
Compile your program with the command ![gcc](https://img.shields.io/badge/gcc---Wall%20--Werror%20--Wextra%20--pedantic%20--std=gnu89%20--Wno--format%20*.c-gray?style=flat)

## Requirements for this project

* All the files were compiled to Ubuntu 22.04 using gcc
* The text editors were Vi or Vim
* All files must follow the betty coding style
* No more than 5 functions per file
* You are not allowed to use global variables
* Include the _putchar function in your code

## Structure 
The code must be as readable and clear as possible. Here are the functions used:

|                  **Functions**                  	|     **Functions specifiers**    	|
|:-----------------------------------------------:	|:-------------------------------:	|
|       int _printf(const char *format, ...)      	|   int print_char(va_list args)  	|
| int _format(const char specifier, va_list args) 	|  int print_string(va_list args) 	|
|               int _putchar(char c)              	| int print_percent(va_list args) 	|
|                                                 	|   int print_int(va_list args)   	|

## Examples

_printf("character is %c\n", 'P')
![output:](https://img.shields.io/badge/output:-character%20is%20P-green?labelColor=GRAY&style=flat)

_printf("the string is %s\n", "Hello World")
![output:](https://img.shields.io/badge/output:-the%20string%20is%20Hello%20World-green?labelColor=GRAY&style=flat)

_print("the percent is %%\n)
![output:](https://img.shields.io/badge/output:-the%20percent%20is%20%25-green?labelColor=GRAY&style=flat)

_printf("the integer is %i\n", '1')
![output:](https://img.shields.io/badge/output:-the%20integer%20is%201-green?labelColor=GRAY&style=flat)

_printf("the integer is %d\n '-2')
![output:](https://img.shields.io/badge/output:-the%20integer%20is%20--2-green?labelColor=GRAY&style=flat)

## Man page

For this custom function, we've also created a manual review to provide a clear explanation of our function, with the name "man_3_printf"
To test our code, Holberton School sent us a test program with which we validated our code.

## Flowchart

![flowchart](Flowchart.jpg)

## Authors

![Mickael](https://img.shields.io/badge/Mickael-CHAUVIN-blue?labelColor=GRAY&style=social)

![Link](https://img.shields.io/badge/Link-https://github.com/AlphaDesnoc-grey?style=flat)

![Julie](https://img.shields.io/badge/Julie-TOLVE-blue?labelColor=GRAY&style=social)

![Link](https://img.shields.io/badge/Link-https://github.com/JulieRaph-grey?style=flat)
