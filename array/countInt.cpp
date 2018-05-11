#include <stdio.h>

/*counts the amount of occurences of each digit in an input*/
main(){
	int c, i;
	int ndigit[10];

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != '\n')
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
}