#include <stdio.h>

int main() {
	int p[3], x[3], f = 0;
	int max_idx = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &p[i]);
		max_idx = (p[max_idx] < p[i]) ? i : max_idx;
	}

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &x[i]);
	}

	for (long long i = x[max_idx]; i <= 1000000000; i += p[max_idx])
	{
		if (i % p[(max_idx + 1)%3] == x[(max_idx + 1) % 3] && i % p[(max_idx + 2) % 3] == x[(max_idx + 2) % 3]) {
			printf("%d", i);
			f = 1;
			break;
		}
	}
	if (f == 0) printf("%d", -1);

}
