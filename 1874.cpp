#include <stdio.h>

int main() {

	int n;
	int input;

	int cnt = 1;

	int stack[100000], tail = 0;
	char result[200000];//입력에 대해서 항상 push와 pop이 한번씩 이루어짐으로 결과배열의 크기는 2*ㅜ
	int last = 0;

	int f = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &input);

		if (f == 1) continue;

		if (input >= cnt)
		{
			for (; cnt <= input; cnt++)
			{
				stack[tail++] = cnt;
				result[last++] = '+';
			}
		}
		if (stack[tail - 1] == input)
		{
			tail--;
			result[last++] = '-';
		}

		if (tail > 0 && stack[tail - 1] > input) {
			f = 1;
		}
	}

	if (f == 0) {
		int i = 0;
		for (; i < last - 1; i++)
		{
			printf("%c\n", result[i]);
		}
		printf("%c", result[i]);
	}
	else {
		printf("NO");
	}

}
