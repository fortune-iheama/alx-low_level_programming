#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base ten starting from zero
 * positive,negative or zero
 * Return: Always 0 (success)
 */
int main(void)
{
int digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}
