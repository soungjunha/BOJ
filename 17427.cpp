#include<stdio.h>

int main() {
	long long x;
	long long total = 0;

	scanf("%lld", &x);

	for (long long i = 1; i <= x; i++)
	{
		total += i * (x / i);
	}

	printf("%lld", total);

}

//자료형 신경써라!!
