#include<stdio.h>

int main() {

	int n, arr[200000], least = 1000000001, answer = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (answer<arr[i]-least)
		{
			answer = arr[i] - least;
		}
		if (arr[i]<least)
		{
			least = arr[i];
		}
		printf("%d ", answer);
	}

}