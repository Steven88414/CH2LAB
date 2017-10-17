#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int grade;
	int ac = 0;
	int bc = 0;
	int cc = 0;
	int dc = 0;
	int fc = 0;

	printf("Enter the letter grades.\n");
	printf("Enter the EOF character to end input.\n");

	while ( (grade = getchar() ) != EOF)
	{
		switch (grade)
		{
		case 'A':
		case 'a':
			++ac;
			break;
		case 'B':
		case 'b':
			++bc;
			break;
		case 'C':
		case 'c':
			++cc;
			break;
		case 'D':
		case 'd':
			++dc;
			break;
		case 'F':
		case 'f':
			++fc;
			break;
		case '\t':
		case '\n':
		case ' ':
			break;
		default:
			printf("Incorrected  letter grade entered.\n");
			printf("Enter a new grade  .\n");
			break;
		}
	}

	printf("\n total for all grades are:\n");
	printf("A:%d\n", ac);
	printf("B:%d\n", bc);
	printf("C:%d\n", cc);
	printf("D:%d\n", dc);
	printf("F:%d\n", fc);

	system("pause");
	return 0;
}