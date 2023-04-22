#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - Entry point
 * Complete the source code in order to print whether the number stored in the variable n is positive or negative.
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n)
return (0);
}
