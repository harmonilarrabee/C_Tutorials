#include <stdio.h>

float celsius(int fahr);

/* print Fahrenheit-Celsius table; function version*/
main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, celsius(fahr));

	return 0;
}

/*convert fahrenheit temperature to celsius*/
float celsius(int fahr)
{
	float i;

	i = (5.0/9.0)*(fahr-32);
	return i;
}