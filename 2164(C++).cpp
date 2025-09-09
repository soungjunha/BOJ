#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {

	queue<int> card_file;
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		card_file.push(i);
	}

	while (card_file.size() != 1)
	{
		card_file.pop();
		card_file.push(card_file.front());
		card_file.pop();
	}
	cout << card_file.front();
}
