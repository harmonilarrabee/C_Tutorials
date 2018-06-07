#include <stdio.h>

int replace();

/*replaces each string of blanks in an input with the minimum
number of tabs and blanks to achieve the same spacing*/
main()
{
	int c, i;

	i = 0;
	while ((c = getchar()) != '\n') {
		if (c == ' ' || c == '\t') {
			if (c == ' ')
				++i;
			else
				i = i + 4;
			
		}
		else {
			/*code to caclulate the correct number of tabs
			and blanks using i and then print them goes here*/
			printf("%d", i);
			i = 0;
			putchar(c);
		}
	}
}