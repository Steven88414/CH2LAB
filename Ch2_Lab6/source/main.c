#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count;
	float tax = 0;
	float total = 0;
	float amount = 0;

	printf("welcome to fair tax calculater!\n");
	printf("here are some common expense categories:\n");
	printf("1:Housing,2:food,3:clothing,4:transportayion,5:education,6:heaith care,7:vacations\n");

	for (count = 1; count <= 7; count++)
	{
		printf("please input hoe much you paid for expenses in category %d: \n",count);
		scanf_s("%f", &amount);
		total += amount;
	}
	tax = total*0.23;
	printf("your total fair tax would be $%.2f\n", tax);
	system("pause");
	return 0;




}