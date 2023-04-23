#include <stdio.h>

/**
*main - Prints numbers between zero to nine
*Return: Always 0 (Success)
*/
int main(void)
{
char hex_digits[] = "0123456789abcdef";
int i;
for (i = 0; i < 16; i++)
printf("%c\n", hex_digits[i]);
return (0);
}
