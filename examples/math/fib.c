//
// file: /examples/math/fib.c
// author: Emily
// email: <emily@liveemily.com>
//
// Put our includes up here so they're not in the way.
#include <stdio.h>

// Define our main function here, this function runs at runtime.
int main(void) {
    int x, y, z;

    // A loop that will run no matter what.
    // This prints x, adds x and y, moves y into x and z into y.
    // Continues till x is bigger than 255.
    while (1) {
        x = 0;
        y = 1;
        do {
            printf("%d\n", x);

            z = x + y;
            x = y;
            y = z;
        } while (x < 255);
    };
};
