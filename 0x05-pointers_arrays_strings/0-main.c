#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int b;

    b = 402;
    printf("b=%d\n", b);
    reset_to_98(&b);
    printf("b=%d\n", b);
    return (0);
}
