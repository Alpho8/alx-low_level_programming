#include <stdio.h>

/**
 * main - Entry point, prints the number of arguments passed
 * @argc: Argument count
 * @argv: Argument vector (unused)
 *
 * Return: 0 on success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
