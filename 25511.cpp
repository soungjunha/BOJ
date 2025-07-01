#include <stdio.h>

int main() {
	int parent[100000] = { -1 }, val[100000], val_to_index[100000];

	int n, k;
	int p, c;
	int data;
	int target_index;
	int depth = -1;

	scanf("%d%d", &n, &k);

	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d%d", &p, &c);
		parent[c] = p;
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data);
		val[i] = data;
		val_to_index[data] = i;
	}

	target_index = val_to_index[k];

	do
	{
		target_index = parent[target_index];
		depth++;
	} while (target_index != -1);

	printf("%d", depth);
}
/*아래 코드는 null포인터 참조가 일어남
#include <stdio.h>
#include <stdlib.h>

typedef struct Tree {
	struct Tree** child;
	int child_num;
	int num;
	int val;
};

Tree* find_num_node(Tree* root, int num) {//dfs
	if (root == NULL) return NULL;
	if (root->num == num)return root;
	for (int i = 0; i < root->child_num; i++)
	{
		Tree* result = find_num_node(root->child[i], num);
		if (result != NULL) {
			return result;
		}
	}
	return NULL;
}

int find_node_depth(Tree* root, int val, int depth) {
	if (root->val == val) return depth;

	for (int i = 0; i < root->child_num; i++) {
		int result = find_node_depth(root->child[i], val, depth + 1);
		if (result != -1) {
			return result;
		}
	}

	return -1;
}

Tree* creat_node(int num) {
	Tree* node = (Tree*)malloc(sizeof(Tree));
	node->num = num;
	node->child = (Tree**)malloc(1);
	node->child_num = 0;
	return node;
}

void add_node(Tree* root, int parent, int child) {
	Tree* new_node = creat_node(child);
	Tree* parent_node = find_num_node(root, parent);

	parent_node->child = (Tree**)realloc(parent_node->child, sizeof(Tree*) * (parent_node->child_num + 1));

	parent_node->child[parent_node->child_num++] = new_node;

}

void clear_tree(Tree* root) {
	if (root == NULL) return;

	for (int i = 0; i < root->child_num; i++)
	{
		clear_tree(root->child[i]);
	}

	free(root->child);
	free(root);

}

int main() {

	int n, k;
	int p, c;
	int data;
	Tree* root = creat_node(0);

	scanf("%d%d", &n, &k);

	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d%d", &p, &c);

		add_node(root, p, c);
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data);
		Tree* current = find_num_node(root, i);
		current->val = data;
	}

	printf("%d", find_node_depth(root, k, 0));

}
*/