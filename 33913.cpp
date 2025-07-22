#include <stdio.h>

#define M 1000000007

int main() {
	long long n;
	long long en = 1, en_1 = 24;
	long long tmp;

	scanf("%lld", &n);

	for (int i = 2; i <= n; i++)
	{
		tmp = en_1;
		en_1 = ((48 * en_1) % M - (572 * en) % M + M) % M;
		en = tmp;
	}

	printf("%lld", en_1);

}
