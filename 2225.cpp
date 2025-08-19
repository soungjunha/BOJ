#include <stdio.h>

#define M 1000000000

long long dp[201][201];

long long make_zero(long long n, long long k) {//overflow¡÷¿«
	if (k == 1)return dp[n][k] = 1;
	if (dp[n][k] != 0) return dp[n][k];
	for (long long i = 0; i <= n; i++)
	{
		dp[n][k] += make_zero(n - i, k - 1) % M;
	}
	return dp[n][k] % M;
}

int main() {

	long long n, k;

	scanf("%lld%lld", &n, &k);

	printf("%lld", make_zero(n, k));

}
