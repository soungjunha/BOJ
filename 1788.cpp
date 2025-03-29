#include<stdio.h>

int fibonacci[1000001] = { 0,1 };

int main() {

	int n;
	int result;
	
	scanf("%d", &n);

	if (n >= 0)
	{
		for (int i = 2; i <= n; i++)
		{
			fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 1000000000;
		}
	}
	else
	{
		for (int i = 2; i <= -n; i++)
		{
			fibonacci[i] = (fibonacci[i - 2] - fibonacci[i - 1]) % 1000000000;
		}
	}

	result = fibonacci[(n > 0) ? n : (-n)];

	if (result > 0)
		printf("%d\n", 1);
	else if (result < 0)
		printf("%d\n", -1);
	else if (result == 0)
		printf("%d\n", 0);
	printf("%d", (result > 0) ? result : (-result));
}
