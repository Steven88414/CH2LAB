#include <stdio.h>
#include <stdlib.h>
double pow(float x, float y)
{
	double i, result = 1;
	for (i = 0; i < y; i++)
	{
		result *= x;
	}
	return result;
}
int main(void)
{
	float pop = 6763;
	float rate = 0.0118;
	float newpop = pop;
	float newpop2 = pop;
	int year;

	printf("%15s%30s%25s\n", "years from now", "population(in millions)", "increase(in millions)");

	for (year = 1; year <= 75; year++)
	{
		newpop2 = newpop;
		newpop = pop*pow(1 + rate, year);
		printf("%15d%30.2f%25.2f\n", year,newpop,newpop-newpop2);

	}
	system("pause");
	return 0;
}