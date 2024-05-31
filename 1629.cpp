#include<stdio.h>

long long dp[33];

long long pow(long long a, long long b, long long c, int cnt) {
	if (b == 0) return 1;
	if (b == 1) return a%c;
	if (dp[cnt] != 0) return dp[cnt];

	if (b % 2 == 0) {
		dp[cnt] = ((pow(a, b / 2, c, cnt + 1) % c) * (pow(a, b / 2, c, cnt + 1) % c)) % c;
		return dp[cnt];
	}
	else {
		dp[cnt] = ((((pow(a, b / 2, c, cnt + 1) % c) * (pow(a, b / 2, c, cnt + 1) % c)) % c) * (a % c)) % c;
		return dp[cnt];
	}

}

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%lld", pow(a, b, c, 0));

}
