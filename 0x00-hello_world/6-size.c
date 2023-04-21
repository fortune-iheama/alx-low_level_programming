#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;

printf("size of a char: %ld byte(s)\n", sizeof(c));
printf("size of an int: %ld byte(s)\n", sizeof(i));
printf("size of a long int: %ld byte(s)\n", sizeof(l));
printf("size of a long long int: %ld byte(s)\n", sizeof(ll));
printf("size of a float: %ld byte(s)\n", sizeof(f));
    return (0);
}
