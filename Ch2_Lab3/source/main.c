#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int height;
	int lower;
	int upper;
	int step;
	double weight;

	printf("�q�h��CM:?");
	scanf_s("%d", &lower);
	printf("��h��CM:?");
	scanf_s("%d", &upper);
	printf("�C�j�h��CM:?");
	scanf_s("%d", &step);

	for (height = lower; height <= upper; height += step)
	{
		weight = (height - 100)*0.9;
		printf("%dCM %.2fKG\n",height, weight);
	}
	system("pause");
	return 0;
}