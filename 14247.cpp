#include <stdio.h>

#define MAX 100000

typedef struct Tree {
	int h, a;
};

void merge(Tree arr[], int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = 0;
	Tree tmp[MAX];

	while (i <= mid && j <= end) {
		if (arr[i].a < arr[j].a)tmp[k++] = arr[i++];
		else tmp[k++] = arr[j++];
	}

	while (i <= mid)tmp[k++] = arr[i++];
	while (j <= end)tmp[k++] = arr[j++];

	for (i = start, k = 0; i <= end; i++, k++)
	{
		arr[i] = tmp[k];
	}

}

void sort(Tree arr[], int start, int end) {
	if (start < end)
	{
		int mid = (start + end) / 2;

		sort(arr, start, mid);
		sort(arr, mid + 1, end);

		merge(arr, start, mid, end);

	}
}

int main() {
	int n;
	Tree tree[MAX];
	long long result = 0;//나이브하게라고 오버플로우 나는지 확인하고 문제 풀기 시작하기

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tree[i].h);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tree[i].a);
	}

	sort(tree, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		result += i * tree[i].a + tree[i].h;
	}

	printf("%lld", result);

}