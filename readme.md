# Code Notes for C programmers

## About

* * *

The `Code Note` project is a educational project that consists of code samples and written
information for your learning experience. Feel free to compile and run any of the samples
you like.

## Content

### Variable declaration

Variables are declared starting with type first say we have a
variable that is of type integer this done with **`int`** it
stands for integer decimal value.

```c
int integerOne;
int integerTwo;
```

It is possible to define two variables on one line this would
introduce confusion depending on the context. So it's there
in case you need it.

```c
int integerOne, integerTwo;
```

When assigning a calculation to a variable, it must be on the
right side of the assignment operator in the written expression.
It is a compilation error if you place the calculation of the
left side of the assignment operator.

The operation within an assignment expression calculates the total
value of variables **`integerOne`** and **`integerTwo`** and assigns
the result of the calculation to the summary variable using the
assing operator. Also should note that the operator has two operand's
which make it a binary operator and those operands, in this case, are
the following:

```c
summary = integerOne + integerTwo; // assing total to be the sum
```


### Memory Concepts

Variables such as the ones in the addition example are actually
corresponding to memory locations in the computer's memory. Every
variable has a name, a data type, and a value it holds. Variables
are like having storage boxes that can contain a value. So let's
say that we place the numeric value of _45_ into box one.

The value is in a memory location, the value in the box will replace
the previous value in the box at that location, and the old value is
lost; thus, this process is destructive.


### Arithmetic Operators

The language provides a decent range of operators for arithmetic
operations. You may have noticed that not all of the arithmetic
operators found algebra like the astricts (**`*`**), for times,
and the percent singe (**`%`**) for the remainder of a value. 

```txt
Operators for Arithmetic

-----------------------------
: + : addition
: - : subtraction
: / : division
: * : multiplication
: % : remainder
```

Mathematical expressions must be separated, with a space like an
example below. And definitely in cases with multination.

```c
// example of a good expression (a * b)
```

With an integer division operation, it will yield an integer result. Let's
say that we have the mathematical expression of (`7 / 4`) evaluate to the
value of one, and the example expression of (`17 / 5`) should result in
three. The remainder operator, or formally known as (**`%`**), will yield
the remainder of value after division. Let's say now that we have the
expression (`7 % 4`), this will result in three, and the example expression
(`17 % 5`) this will result in two.

With an integer division operation, it will yield an integer
result. Let's say for example we have the mathematical expression
of (`7 / 4`) evaluate to the value of one and that the expression of
(`17 / 5`) will evaluate to the result of three.

The act of dividing by zero normally undefined on host computer
systems is generally will lead to a fatal error that causes a
program to terminate imminently and never complete the task.

Arithmetic lines must be written in one straight-line form to facilitate
entering a mathematical expression into a computer program. Thus, the
example expression of (`a / b`). Both operands appear on a straight-line.
Here bellow is the algebraic equivalent of the example expression.

```c
// example of a classic algebraic expression
//
//    a
//   ---
//    b
```

Operators in a written expression contained within a pair of parentheses
in a specified sequent in a determined order follow the rules of operator
precedents, which are generally the same in algebra and consistent in other
programming languages.

* Parentheses are said to be at the "highest level" of interacting with
  the natural mathematical order of operations of precedence. In this
  example of nested, or embedded, parentheses, such as `((a + b) + c)`.

* Multiplication, division, and the remainder operator operations are
  applied next.  If an expression contains several divisions and the
  remainder operators, then the evaluation proceeds from left to right.

* Addition and subtraction will be evaluated next after the multiplication,
  division, and remainder operator operations. If an expression contains
  more than one additional operator in the written algebraic expression,
  then the evaluation proceeds from left to right.

* The assignment operator will be evaluated in the expression last.

Now let's see some expressions side by side and showcase the algebraic
equations and the C language equivalents.

```c
// Algebraic:
//
//      a + b + c + d + e
// m = -------------------
//             5
//
// C:
//
// m = (a + b + c + d + e) / 5;
```

The parentheses are required to group the additions because the division
has higher precedents.

```c
// Algebraic:
//                 e
// a + b + c + d + -
//                 5
```


## Decision making: Equality and relational operators

Programs executable statements are either performed actions (such as a
result of a calculation, a user input, and expected output of data) or
to make a *`desition`*. Here we will introduce the concept of the
`if-statement`.

A syntax error occurs if the two symbols in any of the operators (`==`,
`!=`, `>=`, and `<=`), are separated by spaces.

```txt
Operators for Relational and Equality

-----------------------------
Relational operators:

: >  : greater than number of pizza boxes
: <  : less than number of pizza boxes
: >= : greater or equale to number of pizza boxes
: <= : greater or equale to number of pizza boxes

Equality operators:

: == : its equale to number of pizza boxes
: != : not equale to number of pizza boxes
```

```txt
Operators for Associativy

-----------------------------
: () : left to right
: *  : left to right
: /  : left to right
: -  : left to right
: %  : left to right
: +  : left to right
: == : left to right
: =  : left to right
: >  : left to right
: <  : left to right
: >= : left to right
: <= : left to right
: == : left to right
: != : left to right
: =  : right to left
```

Note to self do not confuse the equality operator with the assignment
operator.

Although it's allowed for there to be more than one statement per line,
there should be no more than one statement per line in a program.

C has some keywords that you should not use to name your identifiers.

```c
// Operators for Associativy
//
// -----------------------------
auto
break
case
char
const
continue
default
do
double
else
enum
extern
float
for
goto
if
int
long
register
return
short
signed
sizeof
static
struct
switch
typedef
union
unsigned
void
volatile 
while

//
// Keywords added in c99
_Bool
_Complex
_Imaginary
inline
restrict

//
// keywords added in c11
_Alignas
_Alignof
_Atomic
_Generic
_Noreturn
_Stataic_assert
_Thread_local
```
