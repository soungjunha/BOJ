#include <stdio.h>

int main() {
	int n, result=1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		result *= 2;
	}
	printf("%d", result);
}
