#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> map;

long long seq(long long n, long long p, long long q) {
	if (n == 0) return 1;
	if (map[n] != 0) return map[n];

	map[n] = seq(n / p, p, q) + seq(n / q, p, q);
	return map[n];

}

int main() {

	long long n, p, q;

	scanf("%lld%lld%lld", &n, &p, &q);

	printf("%lld", seq(n, p, q));

}
