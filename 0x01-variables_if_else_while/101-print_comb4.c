#include <stdio.h>

int main()
{	
	int a;
	int b;
	int c;

	while (a <= '6')
	{
		while (b <= '7')
		{
			while (c <= '8')
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
				}c++;


                        }
		}
	}

}
putchar('\n');
return (0);
