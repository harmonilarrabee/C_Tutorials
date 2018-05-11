#include <stdio.h>

/*prints a histogram of the frequencies of words of different lengths in input*/
main() {
	int c, i, nchar, x;
	int ndigit[10];

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != '\n')
		if (c != ' ')
			++nchar;
		else
			for (i = 0; i < 10; ++i)
				if (nchar == i) {
					++ndigit[i];
					nchar = 0;
				}

	for (i = 0; i < 10; ++i)
			if (nchar == i)
				++ndigit[i];

	printf("\nFrequency of Words of Different Character Lengths:\n");
	for (i = 1; i < 10; ++i) {
		printf("%d ", i);
		for (x = 0; x <= ndigit[i] - 1; ++x)
			printf("X");
		printf("\n");
	}
}