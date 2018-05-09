#include <stdio.h>

#define IN  1    /*inside a word*/
#define OUT 0    /*outside a word*/

/*count words and characters in input*/
main()
{
	int c, nc, nw, state;

	state = OUT;
	nc = nw = 0;
	while ((c = getchar()) != '\n') {
		++nc;
		if (c == ' ')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("Characters: %d\nWords: %d\n", nc, nw);
}