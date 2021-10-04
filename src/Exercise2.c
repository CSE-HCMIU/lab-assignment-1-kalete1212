#include<stdio.h>
int main()
{
	int number, max, min;
	printf(" Enter your number: ");
	scanf("%d", &number);
	max = number;
	min = number;
	while (number!=0)
	{
		if (max < number)
			max = number;
		if (min > number)
			min = number;
		scanf("%d", &number);
	}
	printf("max: %d\n", max);
	printf("min: %d\n", min);
	float ave = (max + min)*1.0 / 2;
	printf("ave %f", ave);
	return 0;
}
