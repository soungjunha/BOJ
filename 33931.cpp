#include <stdio.h>

long long gcd(long long a, long long b) {
	if (a % b == 0)return b;
	return gcd(b, a % b);
}

int main() {

	long long n, m;

	long long box_num = 0;
	long total_box = 0;

	long long pre_box = 0;

	scanf("%lld%lld", &n, &m);

	long long gcd_ = gcd(n, m);

	n /= gcd_;
	m /= gcd_;

	long long q = m / n;
	long long r = m % n;

	printf("%lld", (r * ((q + 1) % 2) + (n - r) * (q % 2)) * gcd_);
}
