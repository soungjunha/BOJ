#include<stdio.h>
#include<queue>

int main() {
	int n, w, l;
	int truck[1000];
	int index_s = 0, index_f = 0;
	int total_weight = 0;
	int time = 0;
	int tmp = 0;

	std::queue<int> bridge;
	bridge.push(0);

	scanf("%d%d%d", &n, &w, &l);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &truck[i]);
	}

	while (index_s < n)
	{

		time++;
		if (bridge.size() == w)
		{
			total_weight -= bridge.front();
			bridge.pop();
		}
		if (total_weight + truck[index_s] <= l)
		{
			total_weight += truck[index_s];
			bridge.push(truck[index_s]);
			index_s++;
		}
		else
		{
			bridge.push(0);
		}
		

	}

	printf("%d", time);

}