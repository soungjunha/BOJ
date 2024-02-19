#include<stdio.h>

int main() {

	int n, arr[1000], start = 0, hight = 0;

	scanf("%d", &n);
	scanf("%d", &arr[0]);
	start = arr[0];
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > arr[i - 1])
		{
			if (arr[i] - start > hight)
			{
				hight = arr[i] - start;
			}
		}
		else {
			start = arr[i];
		}
	}

	printf("%d", hight);

}