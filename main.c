#include "holberton.h"

/**
 * main - function name
 * @ac: count arguments
 * @av: store arguments
 * @env: variable envirionment system
 * Return: status_exit value;
 **/

int main(int ac, char *av[], char **env)
{
	int count_exe = 1, status_exit = 0;
	(void)ac;

	signal(SIGINT, _sighandler);

	if (ac > 1)
	{
		status_exit = non_interact(av);
		return (status_exit);
	}
	status_exit = interactive(av, count_exe, env);
	return (status_exit);
}
