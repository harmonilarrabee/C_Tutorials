#include <stdio.h>

/*copy input to output*/
main()
{
	int c;

	while ((c = getchar()) != '\n') {
		putchar(c);
	}
}