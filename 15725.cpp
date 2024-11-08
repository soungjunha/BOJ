#include<stdio.h>

int main() {
	char polynomial[20];
	char res[10];
	int f = 0;

	scanf("%s", polynomial);
	if (polynomial[0] == '-' && polynomial[1] == 'x') {//다항식의 최고차 계수가 -1인 경우
		printf("-1");
	}
	else if (polynomial[0] == 'x') {//다항식의 최고차 계수가 1인 경우
		printf("1");
	}
	else {//다항식의 최고차 계수의 절댓값이 1이 아닌경우
		int i;
		for (i = 0; polynomial[i] != 'x'; i++)
		{
			if (polynomial[i] == '\0') {
				printf("0");
				f = 1;
				break;
			}
			res[i] = polynomial[i];
		}
		res[i] = '\0';
		if (f == 0)
			printf("%s", res);
	}
}
