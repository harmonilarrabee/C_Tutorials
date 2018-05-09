#include <stdio.h>

/*print value of '\n'*/
main()
{
	int c, x;

	c = getchar() != '\n';
	printf("Value of c without parentheses: ");
	putchar(c);
	printf("\n");

	x = '\n';
	printf("Value of newline character: %d", x);
}