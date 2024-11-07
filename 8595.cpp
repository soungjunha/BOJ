#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int len, hidden_len = 0;
	int total_hidden_num = 0;
	char *str;
	char hidden_num[7];

	scanf("%d", &len);

	str = (char*)malloc((len + 1) * sizeof(char));

	scanf("%s", str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9') {
			while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
			{
				if (hidden_len <= 6)
					hidden_num[hidden_len] = str[i];
				hidden_len++;
				i++;
			}
			if (hidden_len <= 6)
			{
				hidden_num[hidden_len] = '\0';
				total_hidden_num += atoi(hidden_num);
			}
			hidden_len = 0;
		}
	}
	printf("%d", total_hidden_num);
}
