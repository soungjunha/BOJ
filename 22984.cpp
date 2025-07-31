#include <stdio.h>

int main() {

	int n;
	double p[100000];
	double e = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &p[i]);
		e += p[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		e += p[i] + p[i + 1] - 2 * p[i] * p[i + 1];
	}

	printf("%lf", e);

}
