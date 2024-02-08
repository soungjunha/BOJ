#include<stdio.h>

int main() {

	int num = 0;
	scanf("%d", &num);
	for (int i = num; i > 0; i--)
	{
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

}