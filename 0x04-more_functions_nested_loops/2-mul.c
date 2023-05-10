#include "main.h"
/**
 *mul - multiplies two ints.
 *@a: integer.
 *@b: integer.
 *
 *Return: product.
 */
int mul(int a, int b)
{
	int product;

	product = a * b;
	return (product);
}


2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
