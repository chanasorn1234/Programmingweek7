#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	float x, y, Result;
	char End[] = {'¨','º', 'â', '»', 'Ã', 'á', '¡', 'Ã', 'Á' };
	printf("Weight : ");
	scanf("%f", &x);
	printf("Height : ");
	scanf("%f", &y);

	y /= 100;

	Result = x / pow(y,2);
	printf("\n");
	printf("%.2f\n\n", Result);
	if (Result < 18.5)
	{
		printf("Underweight\n\n");
	}
	if (Result >= 18.5 & Result <= 24.99)
	{
		printf("Normal Weight\n\n");
	}
	if (Result >= 25 & Result <= 29.99)
	{
		printf("Overweight\n\n");
	}
	if (Result >= 30)
	{
		printf("Obesity\n\n");
	}

	for (int i = 0; i < 9; i++)
	{
		printf("%c", End[i]);
	}

	return 0;
}
