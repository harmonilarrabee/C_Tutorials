#include <stdio.h>

/*replaces spaces in input with underscores*/
main()
{
	int c;

	while ((c = getchar()) != '\n') {
		if (c == ' ')
			printf("_");
		else
			putchar(c);
	}
}