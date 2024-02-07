#include<stdio.h>

int main() {

	char name[11];
	int age = 0, wight = 0;

	while (true)
	{

		scanf("%s%d%d", &name, &age, &wight);

		if (name[0] == '#' && age == 0 && wight == 0)
			break;
		if (age > 17 || wight > 80)
			printf("%s senior\n", name);
		else
			printf("%s junior\n", name);

	}

}