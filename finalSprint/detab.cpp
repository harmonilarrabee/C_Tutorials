#include <stdio.h>

/*replaces each tab in an input with four blanks*/
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