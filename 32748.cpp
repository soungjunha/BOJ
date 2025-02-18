#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char digit[10];//f^(-1)(x)
	char fdigit[10]; //f(x)
	char f_a[8], f_b[8];//f(A),f(B)
	char f_ab[10];//f(A+B)

	char a[8], b[8];//A,B
	int ab;//A+B
	int i;

	for (int i = 0; i < 10; i++)
	{
		scanf(" %c", &fdigit[i]);
		digit[fdigit[i] - '0'] = i + '0';
	}

	scanf("%s%s", f_a, f_b);
	for (i = 0; i < strlen(f_a); i++)
	{
		a[i] = digit[f_a[i] - '0'];
	}
	a[i] = '\0';
	for (i = 0; i < strlen(f_b); i++)
	{
		b[i] = digit[f_b[i] - '0'];
	}
	b[i] = '\0';
	ab = atoi(a) + atoi(b);
	for (i = 0; ab != 0; i++)
	{
		f_ab[i] = fdigit[ab % 10];
		ab /= 10;
	}
	f_ab[i] = '\0';
	for (int i = strlen(f_ab) - 1; i >= 0; i--)
	{
		/*strlen(f_ab)는 문자열의 널('\0') 문자가 위치한 인덱스를 가리키므로 첫 출력되는 문자가 널 문자가 된다.
			→ 올바른 코드는 인덱스를 strlen(f_ab) - 1부터 시작해야 한다.*/
		printf("%c", f_ab[i]);
	}
}
