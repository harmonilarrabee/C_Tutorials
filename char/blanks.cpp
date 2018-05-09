#include <stdio.h>

/*copies input to output, replacing every series of one or more blanks with one blank*/
main()
{
	int c;

	while ((c = getchar()) != '\n') {
		if (c == ' ') {
			while (c == ' ')
				;
			printf(" ");
		} else
			putchar(c);

	}
}