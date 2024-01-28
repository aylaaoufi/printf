
# 0x11 -> Printf

## </br>[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&size=35&pause=1000&color=f034fd&width=800&lines=-------------------------------------)](https://git.io/typing-svg)



<h3> Description</h3>
<p>printf is a weel known function used in C programming to do formated printing. Usually it only takes the standard library 
<stdio.h> to call it into a c program, and using it for simple strings or formatted specifiers that allow us to print diferent types of data. This time we are presenting a printf project made from scratch in most of its features in order to understand the complexity of a powerful tool. You can see man 3 of printf to understand how _printf works.</p>

<h3> Compilation</h3>

```$ gcc -Wall -Werror -Wextra -pedantic *.c```


<h3> Prototype</h3>

```int _printf(const char *format, ...)```


<h3>Return</h3>
If everything is succesful the function returns the number of characteres printed.

<h3>Formats</h3>

| Specifiers      | Description |
| ----------- | ----------- |
| %c  | Print Single character |
| %s  | Print String of characteres |
| %S  | Print Non printable characters as (\x) |
| %d  | Print Decimal numbers|
| %i  | Print Integers |
| %p  | Print Adresse |
| %b  | Print Binary |
| %u  | Print Unsigned int|
| %o  | Print Octal |
| %x  | Print Hexadecimal (lower case) |
| %X  | Print Hexadecimal (upper case) |
| %+  | Print Integer followed by plus signe if positive (flag) |
| %#  | Print 0 for octal, print (0x, 0X) for hexadecimal (flag) |
| %r  | Print The reversed string |
| %R  | Print The rot13'ed string |


## Printf Project
This project is an implementation of the printf function in the C programming language. </br>
The printf function is used to print formatted output to the standard output stream.

## [aylaaoufi](https://github.com/aylaaoufi)
