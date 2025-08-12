#include <stdio.h>

#define SIZE 100000

void merge(long long arr[], int start, int mid, int end) {
	long long tmp[SIZE];
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end)
	{
		if (arr[i] < arr[j]) tmp[k++] = arr[i++];
		else tmp[k++] = arr[j++];
	}

	while (i <= mid) tmp[k++] = arr[i++];
	while (j <= end) tmp[k++] = arr[j++];
	for (int i = start, k = 0; i <= end; i++, k++)
	{
		arr[i] = tmp[k];
	}

}

void sort(long long arr[], int start, int end) {
	if (start >= end)return;

	int mid = (start + end) / 2;

	sort(arr, start, mid);
	sort(arr, mid + 1, end);

	merge(arr, start, mid, end);

}

int main() {

	long long n, m;
	long long hi[SIZE], arc[SIZE];
	long long i = 0, j = 0;
	long long cnth = 0, cntd = 0;

	scanf("%lld%lld", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", hi + i);
	}

	for (int i = 0; i < m; i++)
	{
		scanf("%lld", arc + i);
	}

	sort(hi, 0, n - 1);
	sort(arc, 0, m - 1);

	for (i = 1, j = 1; i <= n && j <= m;)
	{
		if (hi[i - 1] > arc[j - 1])
		{
			j++;
		}
		else if (hi[i - 1] == arc[j - 1])
		{
			long long cur_p = hi[i - 1];
			long long ch = 0, ca = 0;
			while (i <= n && hi[i - 1] == cur_p)
			{
				ch++;
				i++;
			}
			while (j <= m && arc[j - 1] == cur_p)
			{
				ca++;
				j++;
			}
			cnth += (j - ca - 1) * ch;
			cntd += ca * ch;
		}
		else
		{
			cnth += j - 1;
			i++;
		}
	}
	if (j > m)
	{
		cnth += (n - i + 1) * m;
	}

	printf("%lld %lld %lld", cnth, n * m - cnth - cntd, cntd);//n*m의 최댓값은 100억임으로 overflow발생 가능

}
