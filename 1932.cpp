#include <stdio.h>

int main() {

	int n;
	int triangle[500][500];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			scanf("%d", &triangle[i][j]);
		}
	}

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			triangle[i - 1][j] += (triangle[i][j] > triangle[i][j + 1]) ? triangle[i][j] : triangle[i][j + 1];
		}
	}

	printf("%d", triangle[0][0]);

}
