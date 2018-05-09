#include <stdio.h>

/*counts spaces in input*/
main()
{
	int c, s;

	s = 0;
	while ((c = getchar()) != '\n')
		if (c == ' ')
			++s;
	printf("%d\n", s);
}