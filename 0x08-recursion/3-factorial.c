#include "main.h"

/**
* factorial - is a function that returns the factorial of a diven number.
*
* @n: is an int to factorial function
*
* Return: Return the transformed pointer
*
**/

int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}

return (0);
}
