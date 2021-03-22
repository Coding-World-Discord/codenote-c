//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

// main is where program execution starts
int main(void)
{
    int integerOne; // first integer to be entered by user
    int integerTwo; // second integer to be entered by user

    puts("Enter first integer"); // prompt the user
    scanf("%d", & integerOne); // read value into integer one after it is read

    puts("Enter second integer"); // prompt the user one more time
    scanf("%d", & integerTwo); // read value into integer two after it is read

    int summary; // variable in which the sum is stored
    summary = integerOne + integerTwo; // assing total to be the sum

    printf("%s %d", "Sum is", summary); // output the summary
    return EXIT_SUCCESS;
} // end of function main
