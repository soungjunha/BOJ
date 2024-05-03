#include<stdio.h>

int main() {
	int n,f=0;
	int res = 2, p = 2;
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		res += p;
		if (p%2==0||(p%2==1&&f==1))
		{
			p++;
			f = 0;
		}
		else
		{
			f = 1;
		}
	}
	printf("%d", res);
}
