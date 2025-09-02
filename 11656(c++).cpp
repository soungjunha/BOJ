#include <iostream>
#include <string>
using namespace std;

int main() {
	string input_s;
	string str[1000];

	cin >> input_s;

	int len = input_s.length();

	for (int i = 0; i < len; i++)
	{
		str[i] = input_s.substr(i, len);
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (str[j].compare(str[j + 1]) > 0) {
				string tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		cout << str[i] << endl;
	}

}
