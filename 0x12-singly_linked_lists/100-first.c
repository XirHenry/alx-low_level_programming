#include <stdio.h>

// Declare the function 'first' with a constructor attribute.
void first(void) __attribute__ ((constructor));

/**
 * first - A function that prints a sentence before the main function is executed.
 */
void first(void)
{
    // Print the sentences before the main function is executed.
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

