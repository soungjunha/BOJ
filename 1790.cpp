#include<stdio.h>
#include<math.h>
#include<cstring>

int main() {

	long long n, k, m;
	long long digit = 0;
	long long cnt = 0;
	scanf("%lld%lld", &n, &k);

	for (digit = 0; digit <= 9; digit++)
	{
		long long tmp = 9 * pow(10, digit);
		if (k - tmp > 0)
		{
			k -= (digit + 1) * tmp;
		}
		else
		{
			break;
		}
	}
	/*for (m = pow(10, digit) - 1; k > 0; m++)
	{
		k -= digit + 1;
	}*/
	//k--;
	//m = pow(10, digit) + k / (digit + 1);
	m = pow(10, digit) + ((k + digit) / (digit + 1)) - 1;
	k = (k + digit) % (digit + 1);
	//k %= digit + 1;

	if (m <= n) {
		//int tmp = pow(10, digit + 1 - k);
		m /= (long long)pow(10, digit - k );
		m %= 10;
		printf("%d", m);
		//printf("%d", m % (int)pow(10, digit - k) / (int)pow(10, k));
	}
	else
	{
		printf("-1");
	}

}
