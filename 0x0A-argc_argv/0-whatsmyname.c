#include <stdio.h>
/**
*main -print its name
*@argc: number of arguments. 
*@argv: array pointer to the argument.
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[0]);
		}
	}
	return (0);
}	
