#include <stdio.h>

int ground[1048577];

int main() {
	int n, q;
	int q_ground;
	int min_ground = 0;

	scanf("%d%d", &n, &q);

	for (int i = 0; i < q; i++)
	{
		scanf("%d", &q_ground);
		for (int j = q_ground; j > 0; j/=2)
		{
			if (ground[j]==1)
			{
				min_ground = j;
			}
		}
		if (min_ground == 0)
		{
			ground[q_ground] = 1;
		}
		printf("%d\n", min_ground);
		min_ground = 0;
	}

}
