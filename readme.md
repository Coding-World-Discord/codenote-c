# Code Notes for C programmers

## About

* * *

The `Code Note` project is a educational project that consists of code samples and written
information for your learning experience. Feel free to compile and run any of the samples
you like.

## Content

### Comments

The two forward slashes on line one too line four is a comment.
The compiler will ignore comments. The most common use case for
the comments would be for documenting programs to help other
programmers read your code and understand what is going on.

A best practice is to put a comment to describe your function.

```c
// function main begins all program execution
int main(void)
```

It is possible to declare a multiline comment using a `/*` at
the start tell it hits the `*/` indicates the end of the multiline
comment. Recommended comment choice is to use double slashes to
`/*` and `*/` to avoid the possibility of an error due to forgetting
to put a `*/` at the end of the multiline comment.

```c
/*
 A multi-line comment.
 */
```

OR:

```c
/*
 * A multi-line comment.
 */
```

```c
// A single comment
```

A best practice puts a comment like the following on the ending
brace of the function.

```c
} // end of function main
```


### Include directive

Next, you see a `#include`, which is a preprocessor directive
to include content into your program in this code is the
standard input-output library or (`stdio.h`).


### The main function

The function **`main`** is where all program execution starts,
no matter how complex the program is.

The **`main`** function is of type integer is indicated with
**`int`** at the start of the function declaration, and it
does not tack any arguments its seen with the **`void`** keyword
in between the opening and closing parentheses in the function
declaration.

```c
int main(void)
{
    // a code block between here...
}
```


### Opening and Closing braces

Opening and closing braces indicate a scop for the program code,
in between both braces is called a block. Code execution will
start from top to bottom in a code block.

```c
{ // code block it starts here
    // a code block between here...

} // code block ends here
```
