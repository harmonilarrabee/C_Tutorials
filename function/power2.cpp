#include <stdio.h>

int power(int m, int n);

/*test power function*/
main()
{
	int i;

	printf("      2     -3\n");
	for (i = 0; i < 10; ++i)
		printf("%2d %4d %6d\n", i, power(2,i), power(-3, i));
	return 0;
}

/*power: raise base to nth power; n >= 0*/
int power(int base, int n)
{
	int p;

	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}