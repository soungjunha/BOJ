#include<stdio.h>
#include<string.h>

int main() {

	char bord[51], answer[51] = {};//�ʱ�ȭ ����ȭ �ؾ��ҵ�.....
	char* ptr;
	int cnt = 0, f = 0;
	scanf("%s", &bord);

	for (int i = 0; bord[i] != '\0'; i++)
	{
		if (bord[i] == 'X')
		{
			cnt++;
		}
		else
		{
			if (cnt % 2 == 0)
			{
				for (int j = 0; j < cnt / 4; j++)
				{
					ptr = strcat(answer, "AAAA");
				}
				cnt %= 4;
				for (int j = 0; j < cnt / 2; j++)
				{
					ptr = strcat(answer, "BB");
				}
				cnt %= 2;
				ptr = strcat(answer, ".");
			}
			else {
				printf("%d", -1);
				f = 1;
				break;
			}
			cnt = 0;
		}
	}
	if (f == 0) {
		for (int j = 0; j < cnt / 4; j++)
		{
			ptr = strcat(answer, "AAAA");
		}
		cnt %= 4;
		for (int j = 0; j < cnt / 2; j++)
		{
			ptr = strcat(answer, "BB");
		}
		cnt %= 2;
		if (cnt == 1)
		{
			printf("%d", -1);
		}
		else
		{
			printf("%s", answer);
		}
	}

}