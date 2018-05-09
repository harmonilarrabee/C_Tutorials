#include <stdio.h>

/*prints each word of the input on a new line*/
main()
{
	int c;

	while ((c = getchar()) != '\n') {
		if (c == ' ')
			printf("\n");
		else
			putchar(c);
	}
}