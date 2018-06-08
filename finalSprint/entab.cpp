#include <stdio.h>

int replace();

/*replaces each string of blanks in an input with the
minimum number of tabs and spaces to achieve the same
spacing, assuming a tab equals four spaces*/
main()
{
	int c, i, blanks, spaces, tabs;

	blanks = 0;
	while ((c = getchar()) != '\n') {
		if (c == ' ' || c == '\t') {
			if (c == ' ')
				++blanks;
			else
				blanks = blanks + 4;
			
		}
		else {
			spaces = blanks % 4;
			tabs = (blanks - spaces) / 4;
			for (i = 0; i < spaces; ++i)
				printf(" ");
			for (i = 0; i < tabs; ++i)
				printf("\t");
			blanks = 0;
			putchar(c);
		}
	}
}