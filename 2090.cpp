#include<stdio.h>

long long euclidean(long long a, long long b) {
	if (b == 0) return a;
	return euclidean(b, a % b);
}

int main() {
	long long n;
	long long a[9];
	long long p = 0, q = 1;
	long long gcd;
	scanf("%lld", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
		p = p * a[i] + q;
		q *= a[i];
	}

	gcd = euclidean(p, q);

	printf("%lld/%lld", q / gcd, p / gcd);

}
