#include<stdio.h>

int main() {
	int a, b, v, res;
	scanf("%d%d%d", &a, &b, &v);
	res = ((v - b - 1) / (a - b));
	printf("%d", res);
}
