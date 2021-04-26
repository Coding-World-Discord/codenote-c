//
// file: /examples/math/calculator.c
// author: Emily
// email: <emily@liveemily.com>
//
// Put our includes up here so they're not in the way.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define our operations here that return a sum.
int add(int a, int b, int sum)
{
    return sum = a + b;
}
int substract(int a, int b, int sum)
{
    return sum = a - b;
}
int multiply(int a, int b, int sum)
{
    return sum = a * b;
}
int divide(int a, int b, int sum)
{
    return sum = a / b;
}
int remain(int a, int b, int sum)
{
    return sum = a % b;
}

// Define our main function here, this function runs at runtime.
int main() { 
           
           // Define some variables here for use in our code.
           bool breakCode = true;
           char operator;
           int a, b, sum;
           char yOn;

           // Run this code until breakCode = false.
           while(breakCode)
           {
               printf("What operation would you like to do? \n"); 

               scanf(" %c", &operator, 1);

               // Check the value of operator against cases you defined.
               switch(operator)
               {
                    case '+':
                        printf("Please give me the first number to add together.\n"); 

                        scanf(" %d", &a, 1);

                        printf("Please give me the second number to add together.\n"); 

                        scanf(" %d", &b, 1);

                        printf("Your addition concluded in the number %d\n", add(a, b, sum));

                    break;

                    case '-':
                        printf("Please give me the first number to divide together.\n"); 

                        scanf(" %d", &a, 1);

                        printf("Please give me the second number to divide together.\n"); 

                        scanf(" %d", &b, 1);

                        printf("Your substraction concluded in the number %d\n", substract(a, b, sum));

                    break;

                    case '*':
                        printf("Please give me the first number to multiply together.\n"); 

                        scanf(" %d", &a, 1);

                        printf("Please give me the second number to multiply together.\n"); 

                        scanf(" %d", &b, 1);

                        printf("Your multiplication concluded in the number %d\n", multiply(a, b, sum));

                    break;

                    case '/':
                        printf("Please give me the first number to divide.\n"); 

                        scanf(" %d", &a, 1);

                        printf("Please give me the second number to divide.\n"); 

                        scanf(" %d", &b, 1);

                        printf("Your division concluded in the number %d\n", divide(a, b, sum));

                    break;

                    case '%':
                        printf("Please give me the first number to divide.\n"); 

                        scanf(" %d", &a, 1);

                        printf("Please give me the second number to divide.\n"); 

                        scanf(" %d", &b,1 );

                        printf("Your division concluded in the number %d as the remainder\n", remain(a, b, sum));

                    break;
                }

                printf("Would you like to do another math operation? y = yes, n = no\n");

                scanf(" %c", &yOn, 1);

                if(yOn == 'y')
                {
                    breakCode = true;
                }
                else
                {
                    breakCode = false;
                }              
           }
               
           return 0; 
}
