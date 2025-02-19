#include<stdio.h>
#include<math.h>

int main() {
	int x1, x2;//x_1,x_2
	int f[3], g[2];//f(x),g(x)의 계수
	int power = 0;//레이저 세기

	scanf("%d%d", &x1, &x2);

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &f[i]);
	}

	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &g[i]);
	}

	f[1] -= g[0];
	f[2] -= g[1];

	f[0] /= 3;
	f[1] /= 2;

	for (int i = 0; i < 3; i++)
	{
		power += f[i] * pow(x2, 3 - i);
		power -= f[i] * pow(x1, 3 - i);
	}
	printf("%d", power);
}
