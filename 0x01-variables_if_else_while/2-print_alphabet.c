#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main- entry
 * description: this prints alphabets in lower case
 * return :always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int alphabet;
	for (alphabet = '[a..z]'; alphabet++)
{
alphabet = tolower(alphabet)
putchar(alphabet);
}
putchar("\n");
return (0);
}
