#include<stdio.h>

#define MOD 1000007


int main() {
	int w, h, t_x, t_y;
	long long map[200][200];
	long long res1, res2;
	scanf("%d%d%d%d", &w, &h, &t_x, &t_y);

	for (int y = 0; y <= t_y-1; y++)
	{
		for (int x = 0; x <= t_x-1; x++)
		{
			if (x == 0 || y == 0)
			{
				map[y][x] = 1;
			}
			else
			{
				map[y][x] = ((map[y - 1][x] % MOD) + (map[y][x - 1] % MOD)) % MOD;
			}
		}
	}
	res1 = map[t_y - 1][t_x - 1];

	for (int y = 0; y <= h-t_y; y++)
	{
		for (int x = 0; x <= w-t_x; x++)
		{
			if (x == 0 || y == 0)
			{
				map[y][x] = 1;
			}
			else
			{
				map[y][x] = ((map[y - 1][x] % MOD) + (map[y][x - 1] % MOD)) % MOD;
			}
		}
	}

	res2 = ((res1 % MOD) * (map[h - t_y][w - t_x] % MOD)) % MOD;

	printf("%lld", res2);

}
