#include <stdio.h>

#define MAX_SIZE 50000

typedef struct frequency
{
	int index;
	int num;
};

void merge(int arr[], int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = 0;
	int tmp[MAX_SIZE];

	while (i <= mid && j <= end)
	{
		if (arr[i] < arr[j])tmp[k++] = arr[i++];
		else tmp[k++] = arr[j++];
	}

	while (i <= mid)tmp[k++] = arr[i++];
	while (j <= end)tmp[k++] = arr[j++];

	for (i = start, k = 0; i <= end; i++, k++)
	{
		arr[i] = tmp[k];
	}

}

void sort(int arr[], int start, int end) {

	if (start < end)
	{
		int mid = (start + end) / 2;

		sort(arr, start, mid);
		sort(arr, mid + 1, end);

		merge(arr, start, mid, end);

	}

}

void merge_freq(frequency arr[], int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = 0;
	frequency tmp[8001];

	while (i <= mid && j <= end)
	{
		if (arr[i].num > arr[j].num)tmp[k++] = arr[i++];
		else tmp[k++] = arr[j++];
	}

	while (i <= mid)tmp[k++] = arr[i++];
	while (j <= end)tmp[k++] = arr[j++];

	for (i = start, k = 0; i <= end; i++, k++)
	{
		arr[i] = tmp[k];
	}

}

void sort_freq(frequency arr[], int start, int end) {

	if (start < end)
	{
		int mid = (start + end) / 2;

		sort_freq(arr, start, mid);
		sort_freq(arr, mid + 1, end);

		merge_freq(arr, start, mid, end);

	}

}

int main() {

	int n;

	int num[MAX_SIZE];
	int median, max = -4000, min = 4000;
	int mode[8001];
	float mean = 0;
	int cnt = 0;
	frequency freq[8001];

	for (int i = 0; i < 8001; i++)
	{
		freq[i].num = 0;
		freq[i].index = -4001;
	}

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] > max)max = num[i];
		if (num[i] < min)min = num[i];
		mean += num[i];
		freq[num[i] + 4000].index = num[i];
		freq[num[i] + 4000].num++;
	}

	sort(num, 0, n - 1);
	median = num[n / 2];

	sort_freq(freq, 0, 8000);

	for (int i = 0; i < n; i++)
	{
		if (freq[0].num == freq[i].num)
		{
			mode[i] = freq[i].index;
			cnt++;
		}
		else break;
	}

	printf("%.0f\n", (mean / (float)n > -0.5 && mean / (float)n < 0) ? 0 : mean / (float)n);
	printf("%d\n", median);
	if (cnt >= 2) {
		sort(mode, 0, cnt - 1);
		printf("%d\n", mode[1]);
	}
	else
		printf("%d\n", mode[0]);
	printf("%d", max - min);
}
