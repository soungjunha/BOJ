#include<stdio.h>
#include<string.h>

int main() {
	char voca[1000001] = {};
	int alpa[26] = { 0 };
	int fir = 0, flag=0;
	scanf("%s", voca);
	for (int i = 0; voca[i] != '\0'; i++)
	{
		if (voca[i]>'Z')
		{
			alpa[voca[i] - 'a']++;
		}
		else {
			alpa[voca[i] - 'A']++;
		}
	}
	for (int i = 1; i < 26; i++)
	{
		if (alpa[i]>alpa[fir])
		{
			fir = i;
			flag = 0;
		}
		else if (alpa[i] == alpa[fir]) 
		{
			flag = 1;
		}
	}
	if (flag==0)
	{
		printf("%c", fir + 'A');
	}
	else
	{
		printf("?");
	}
}