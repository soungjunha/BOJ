#include<stdio.h>
#include<string.h>

int main() {
	int result = 0;
	char a[10001], b[10001];
	scanf("%s %s", &a, &b);
	
	for (int i = 0; i < strlen(a); i++)
	{
		for (int j = 0; j < strlen(b); j++)
		{
			result += (a[i] - '0') * (b[j] - '0');
		}
	}
	printf("%d", result);
}