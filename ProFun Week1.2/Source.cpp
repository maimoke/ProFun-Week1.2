#include<stdio.h>
int main()
{
	int a, b,sum=0;
	scanf_s("%d %d", &a ,& b);
	if (a % 2 == 0)sum = sum + a;
	if (b % 2 == 0)sum = sum + b;
	while (true)
	{
		a = a + b;
		if (a % 2 == 0)sum = sum + a;
		if (a >= 4000000)
		{
			printf("%d",sum);
			break;
		}
		b = b + a;
		if (b % 2 == 0)sum = sum + b;
		if (b >= 4000000)
		{
			printf("%d", sum);
			break;
		}
	}
	return 0;
}