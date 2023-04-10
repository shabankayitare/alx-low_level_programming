#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* int main prints the name of the program
 * argc is number of arguments
 * argv is array of arguments
 * return always 0 = True value
 */
int main(int argc, char *argv[])
	{
		int i;
		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
		return (0);
	}
