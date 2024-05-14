#include<stdio.h>
#include<stack>

void sorting(int arr[], int left, int right);//merge sort
void merge(int arr[], int left, int mid, int right);

int main() {

	int n, k;
	long long t;
	int tmp = 0;
	int shark[200000];

	std::stack<int> small;

	scanf("%d%d%lld", &n, &k, &t);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &shark[i]);
	}

	sorting(shark, 0, n - 1);

	for (int cnt = 0, index = n - 1; cnt < k;)
	{
		if (index >= 0 && shark[index] < t)
		{
			small.push(shark[index]);
			index--;
		}
		else
		{
			if (!small.empty())
			{
				t += small.top();
				small.pop();
				cnt++;
			}
			else
				break;
		}
	}
	printf("%lld", t);

}

void merge(int arr[], int left, int mid, int right) {
	static int tmp[200000];
	int i, j, k;
	i = k = left;
	j = mid + 1;
	while (i <= mid && j <= right)
	{
		if (arr[i] > arr[j]) {
			tmp[k] = arr[i];
			i++;
		}
		else {
			tmp[k] = arr[j];
			j++;
		}
		k++;
	}

	if (i == mid + 1)
	{
		while (j <= right)
		{
			tmp[k++] = arr[j++];
		}
	}
	else
	{
		while (i <= mid)
		{
			tmp[k++] = arr[i++];
		}
	}

	for (int i = left; i <= right; i++)
	{
		arr[i] = tmp[i];
	}

}

void sorting(int arr[], int left, int right) {
	int mid = (left + right) / 2;
	if (left < right) {

		sorting(arr, left, mid);
		sorting(arr, mid + 1, right);

		merge(arr, left, mid, right);

	}
}
