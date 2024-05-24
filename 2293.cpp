#include<stdio.h>

int case_num[10001] = { 1, };


int coin_combination(int n,int k,int* coins) {

	for (int i = 0; i < n; i++)
	{
		for (int j = *(coins+i); j <= k; j++)
		{
			case_num[j]+= case_num[j - coins[i]];
		}
	}

	return case_num[k];

}

int main() {
	int n, k;
	int coins[100];


	scanf("%d%d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &coins[i]);
	}

	printf("%d", coin_combination(n, k, coins));

}
