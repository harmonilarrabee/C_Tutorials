#include <stdio.h>

/*prints a histogram of the frequencies of digits in input*/
main(){
	int c, i, x;
	int ndigit[10];

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != '\n')
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];

	printf("Frequency of Digits in Input\n");
	for (i = 0; i < 10; ++i) {
		printf("%d ", i);
		for (x = 0; x <= ndigit[i] - 1; ++x)
			printf("X");
		printf("\n");
	}
}