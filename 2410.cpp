#include <stdio.h>

#define M 1000000000

long long dp[1000001];

long long two_power_sum(int n) {
	if (n == 1)return 1;
	if (dp[n] != 0)return dp[n] % M;
	if (n % 2 == 0)
	{
		dp[n] = (two_power_sum(n - 1) % M + two_power_sum(n / 2) % M) % M;
	}
	else
	{
		dp[n] = two_power_sum(n - 1) % M;
	}
	return dp[n] % M;
}

int main() {
	int n;

	scanf("%d", &n);

	printf("%d", two_power_sum(n));

}
