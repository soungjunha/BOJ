#include<stdio.h>

int main() {
	int n,tmp,result=0;
	int arr[1000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i]<arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		result += arr[i] * (n - i);
	}

	printf("%d", result);
	
}
