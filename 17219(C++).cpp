#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	int n, m;
	string site;
	string password;
	unordered_map<string, string> note;

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> site >> password;
		note[site] = password;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> site;
		cout << note[site] << "\n";
	}

}