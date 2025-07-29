#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> map;

long long seq(long long n, long long p, long long q, long long x, long long y) {
	if (n <= 0) return 1;
	if (map[n] != 0) return map[n];

	map[n] = seq(n / p - x, p, q, x, y) + seq(n / q - y, p, q, x, y);
	return map[n];

}

int main() {

	long long n, p, q, x, y;

	scanf("%lld%lld%lld%lld%lld", &n, &p, &q, &x, &y);

	printf("%lld", seq(n, p, q, x, y));

}
