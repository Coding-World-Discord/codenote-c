# Code Notes for C programmers

## About

* * *

The `Code Note` project is a educational project that consists of code samples and written
information for your learning experience. Feel free to compile and run any of the samples
you like.

## Content

### Secure Coding Practice

If you need to have a print statement that outputs text to the screen
consider using the puts function, the puts function in the following
example does not have a newline character because puts automatically
adds one for you.

```c
puts("Hello, World!");
```

The print format function is fairly secure however there are some
actions can be taken. If you need to use a print format function
please do the following:

```c
printf("%s\n", "Hello, World!");
```
