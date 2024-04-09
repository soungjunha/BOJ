#include<stdio.h>

int ThueMorseCnt(long long n) {
	if (n == 1)
		return 0;
	else {
		long long a;
		for (a = 1; a < n; a *= 2);
		a /= 2;
		return !ThueMorseCnt(n-a);
	}
}

int main() {
	long long n;

	scanf("%lld", &n);

	printf("%lld", ThueMorseCnt(n));
}
