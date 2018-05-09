#include <stdio.h>

/* print Celsius-Fahrenheit table
	for fahr = 0, 20, ..., 300; floating-point version with table title*/

main()
{
	printf("Celsius-Fahrenheit Conversions:\n\n");

	float celsius, fahr;
	int lower, upper, step;

	lower = -20;    /* lower limit of temperature table*/
	upper = 150;  /* upper limit of temperature table*/
	step = 10;    /*step size between Fahrenheit temperatures*/

	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%9.0f %12.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}