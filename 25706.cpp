#include<stdio.h>

int dp[200000] = { 0 };

int count(int height[], int n, int start) {
	if (dp[start] != 0) return dp[start];
	if (start + height[start] > n)dp[start] = 1;//종료조건 확인할것!!
	else dp[start] = count(height, n, start + height[start]) + 1;
	return dp[start];
}

int main() {
	int n;
	int height[200000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &height[i]);
		height[i]++;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", count(height, n - 1, i));
	}

}
