#include<stdio.h>
#include<string.h> // strcspn �Լ��� ����ϱ� ���� �߰�

int main() {

	char arr[256];
	int cnt = 0;

	while (arr[0] != '#')
	{
		fgets(arr, sizeof(arr), stdin);//������ �Է¹������� scanf�� �ƴ� gets�� ����Ͽ��� ��
		// fgets�� ���� ���ڸ� �����Ͽ� �Է��� �ޱ� ������ ���� ���ڸ� ����
		arr[strcspn(arr, "\n")] = '\0';
		
		cnt = 0;
		for (int i = 0; arr[i] != '\0'; i++)
		{
			if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}

}