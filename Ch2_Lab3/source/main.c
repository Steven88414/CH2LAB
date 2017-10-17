#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int height;
	int lower;
	int upper;
	int step;
	double weight;

	printf("從多少CM:?");
	scanf_s("%d", &lower);
	printf("到多少CM:?");
	scanf_s("%d", &upper);
	printf("每隔多少CM:?");
	scanf_s("%d", &step);

	for (height = lower; height <= upper; height += step)
	{
		weight = (height - 100)*0.9;
		printf("%dCM %.2fKG\n",height, weight);
	}
	system("pause");
	return 0;
}