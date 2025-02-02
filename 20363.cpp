#include<stdio.h>

int main() {
	int heat, moisture;
	scanf("%d%d", &heat, &moisture);
	if (moisture> heat)
	{
		printf("%d", moisture + heat / 10 + heat);
	}
	else {
		printf("%d", heat + moisture / 10 + moisture);
	}
}