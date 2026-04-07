#include <stdio.h>

int delete_nod(int tree[], int target) {
	if (tree[target] == -2)return 1;
	if (tree[target] == -1)return 0;
	if (delete_nod(tree, tree[target])) {//명령어 2개이상이면 중괄호 필수
		tree[target] = -2;
		return 1;
	}
	return 0;
}

int main() {

	int n;
	int tree[50], child[50] = { 0 };
	int delete_node;
	int leaf_num = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tree[i]);
	}
	scanf("%d", &delete_node);

	tree[delete_node] = -2;

	for (int i = 0; i < n; i++)
	{
		if (tree[i] >= 0)
		{
			delete_nod(tree, i);
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (tree[i] >= 0)
		{
			child[tree[i]]++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		leaf_num += (child[i] == 0 && tree[i] != -2) ? 1 : 0;
	}

	printf("%d", leaf_num);

}
