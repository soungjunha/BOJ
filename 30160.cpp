#include <stdio.h>

int main() {

	int n;
	int arr[100000];
	long long s = 0, t = 0, u = 0;
	int i = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	s = arr[0]; u = arr[0];//초깃값 확인
	printf("%d ", s);
	for (i = 1; i < n; i++)
	{
		t += u;//식 순서 확인!!
		u += arr[i];
		s += 2 * t + u;
		printf("%lld%c", s, (i <= (n - 1)) ? ' ' : '/0');
	}

}
