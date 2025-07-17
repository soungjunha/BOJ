#include <stdio.h>

int main() {
	int n;
	int arr[1001] = { 0 };
	int dp[1001] = { 0 };
	int len = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i]>arr[j])
			{
				dp[i] = (dp[i] > dp[j] + 1) ? dp[i] : dp[j] + 1;
			}
		}
	}

	for (int i = 0; i <= n; i++)
	{
		len = (dp[i] > len) ? dp[i] : len;
	}

	printf("%d", len);

}
