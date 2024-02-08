#include<stdio.h>

int main() {

	int num = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < num-i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

}