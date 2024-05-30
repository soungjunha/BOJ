#include<stdio.h>

unsigned long long dp[37] = { 1,1 };

unsigned long long t(unsigned long long n) {
	if (dp[n] != 0) return dp[n];
	unsigned long long tmp = 0;
	for (int i = 0; i < n; i++)
	{
		tmp += t(i) * t(n - 1 - i);
	}
	dp[n] = tmp;
	return dp[n];
}

int main() {

	int n;

	scanf("%d", &n);

	printf("%lld", t(n));

}
