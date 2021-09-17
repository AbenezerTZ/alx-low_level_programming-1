#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: number of arguments passed
  * @argv: array of arguments passed
  *
  * Return: 0 if program ran correctly, 1 if anything other
  * than numbers was passed in the arguments
  */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);

	printf("%d\n", sum);

	return (0);
}
