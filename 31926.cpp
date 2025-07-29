#include <stdio.h>

int main() {
	int n;
	int cnt = 0;
	
	scanf("%d", &n);
	
	while (n!=0)
	{
		n = n >> 1;
		cnt++;
	}

	printf("%d", 10 + cnt-1);

}
