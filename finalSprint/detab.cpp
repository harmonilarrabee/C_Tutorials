#include <stdio.h>

/*replaces tabs in input with blanks*/
main()
{
	int c;

	while ((c = getchar()) != '\n') {
		if (c == '\t')
			printf("    ");
		else
			putchar(c);
	}
}