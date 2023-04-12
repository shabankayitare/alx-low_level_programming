#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* simple_print_butterfly - prints butterfly in hexa
* @butterfly: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*
*/

void simple_print_butterfly(char *butterfly, unsigned int size)

{
	unsigned int i;

	i = 0;

	while (i < size)
	{
	if (i % 10)
	{
		printf(" ");
	}
	if (!(i % 10) && i)
	{
		printf("\n");
	}
	printf("0x%02x", butterfly[i]);
	i++;
	}
	printf("\n");
}

/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/

int main(void)

{
	char *butterfly;

	butterfly = create_array(98, 'H');
	if  (butterfly == NULL)
	{
	printf("failed to allocate memory\n");
	return (1);
	}
	simple_print_butterfly(butterfly, 98);
	free(butterfly);
	return (0);
}
