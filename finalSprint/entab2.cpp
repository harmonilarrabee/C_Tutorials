#include <stdio.h>

int replace();

/*replaces each string of blanks in an input with the
minimum number of tabs and spaces to achieve the same
spacing, assuming a tab equals four spaces; 
alternate version of entab*/
main()
{
	int c, i, spaces, tabs;

	while ((c = getchar()) != '\n') {
		if (c == ' ' || c == '\t') {
			if (c == ' ')
				++spaces;
			else
				++tabs;
			
		}
		else {
			tabs = tabs + ((spaces - (spaces % 4)) / 4);
			spaces = spaces % 4;
			for (i = 0; i < spaces; ++i)
				printf(" ");
			for (i = 0; i < tabs; ++i)
				printf("\t");
			spaces = 0;
			tabs = 0;
			putchar(c);
		}
	}
}