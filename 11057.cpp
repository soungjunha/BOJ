#include <stdio.h>

#define MOD 10007

int main() {
	int n;
	int res;
	int dp[1001][10] = { {1,1,1,1,1,1,1,1,1,1} };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				dp[i][j] = (dp[i][j] % MOD + dp[i - 1][k] % MOD) % MOD;
			}
		}
	}
	res = dp[n][9];

	printf("%d", res);
}
