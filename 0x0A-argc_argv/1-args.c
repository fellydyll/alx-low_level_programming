#include <stdio.h>

/**
 * main - Print number of program argumnt
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always
 **/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
