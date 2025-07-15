#include <stdio.h>

#define M 10007

int dp[1001][1001];

int combination(int n, int k) {
	if (dp[n][k] != 0)return dp[n][k];
	if (k == n || k == 0) {
		dp[n][k] = 1;
		return dp[n][k];
	}
	dp[n][k] = (combination(n - 1, k) + combination(n - 1, k - 1)) % M;
	return dp[n][k];
}

int main() {
	int n, k;

	scanf("%d%d", &n, &k);

	printf("%d", combination(n, k));

}
