#includde "main.h"
/**
 * _pow_recursion-is a function that returns power of a number
 * @x:1st argument
 * @y:2nd argument
 * Returns:power of 2 numbers
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		reurn (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
