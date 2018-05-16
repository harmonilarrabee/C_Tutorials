#include <stdio.h>

int power(int m, int n);

/*computes exponential input in the form [single-digit, positive base]^[single-digit, positive exponent]*/
main()
{
	int c, base, exp, i;

	c = getchar();
	if (c >= '0' && c <= '9')
		base = c - '0';
	else
		printf("invalid input\n");

	c = getchar();

	c = getchar();
	if (c >= '0' && c <= '9')
		exp = c - '0';
	else
		printf("invalid input");

	printf("%d\n", power(base, exp));
	return 0;
}

/*power: raise base to the exp power; exp >= 0*/
int power(int base, int exp)
{
	int p;

	for (p = 1; exp > 0; --exp)
		p = p * base;
	return p;
}