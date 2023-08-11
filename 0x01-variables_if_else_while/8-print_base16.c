#include <stdio.h>

/* numbers between 0 to 9 and alphabets from a to f */
int main(void)
{
	int i;

	for (i = 0; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

