#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main block
* Description: Get a random number and print the number
* positive,nagetive or zero
* Return: Always 0 (success)
*/
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit == 0)
{
printf("last_digit of %d is %d and is 0\n", last_digit, n);
}
else if (last_digit > 5)
{
printf("last_digit of %d is %d and is greater than 5\n", last_digit, n);
}
else if (last_digit > 0 < 6)
{
printf("last_digit of %d is %d and is greater than 0 and less than 6\n", last_digit, n);
}
return (0);
}
}
