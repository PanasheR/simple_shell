#include "holberton.h"
/**
 * _sighandler - instructive signal
 * @singint: variable
 * Return: Void
 */
void _sighandler(int singint)
{
	if (singint)
		write(STDIN_FILENO, "\n#cisfun$ ", 10);
}
