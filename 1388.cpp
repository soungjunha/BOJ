#include<stdio.h>

int main() {

	int n, m;
	int flag = 0;
	int tile = 0;//tile numbers
	char floor[50][50];//floor graph Adjacency Matrix

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf(" %c", &floor[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (floor[i][j] == '-')
			{
				if (flag == 0)
				{
					flag = 1;
					tile++;
				}
			}
			else
			{
				flag = 0;
			}
		}
		flag = 0;
	}

	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (floor[i][j] == '|')
			{
				if (flag == 0)
				{
					flag = 1;
					tile++;
				}
			}
			else
			{
				flag = 0;
			}
		}
		flag = 0;
	}

	printf("%d", tile);

}
