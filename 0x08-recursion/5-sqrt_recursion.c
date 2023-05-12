#include "main.h"

/**
* get_squareroot - find square root of n, begining from 0
* @n: number
* @root: test this root
* Return: natural square root of a number
* or -1 if not natural root does not exist
*/

int get_root(int n, int root)
{
if (root * root > n)
return (-1);

if (root * root == n)
return (root);

return (get_root(n, root + 1));
}


/**
* _sqrt_recursion - find square root of a number
* @n: number
* Return: natural square root of a number
* or -1 if not natural root does not exist
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (get_root(n, 0));
}
