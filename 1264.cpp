#include<stdio.h>
#include<string.h> // strcspn 함수를 사용하기 위해 추가

int main() {

	char arr[256];
	int cnt = 0;

	while (arr[0] != '#')
	{
		fgets(arr, sizeof(arr), stdin);//공백을 입력받으려면 scanf가 아닌 gets를 사용하여야 함
		// fgets는 개행 문자를 포함하여 입력을 받기 때문에 개행 문자를 제거
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