#include <stdio.h>

int main(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			        putchar((i % 10) + '0');
			}
			else
			{
				putchar(i + '0');
			}
		}
		 putchar('\n');
	}
}
	
