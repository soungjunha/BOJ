#include<stdio.h>

int dp[64][64];

int search(int board[][64], int size, int x, int y) {
	if (x > size || y > size)return 0;
	if (dp[y][x] == 1)return 0;
	if (board[y][x] == -1)return 1;
	if (board[y][x] == 0)return 0;
	if (search(board, size, x + board[y][x], y))return 1;
	else if (search(board, size, x, y + board[y][x]))return 1;
	else dp[y][x] = 1;
	return 0;
}

int main() {
	int n;
	int board[64][64];
	int result;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &board[i][j]);
		}
	}

	result = search(board, n - 1, 0, 0);
	if (result)
	{
		printf("HaruHaru");
	}
	else
	{
		printf("Hing");
	}
}
