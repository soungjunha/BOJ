#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	while (true)
	{
		stack<char> s;
		string str;
		getline(cin, str);

		if (str == ".")break;
		int len = str.length();
		bool check = false;

		for (int i = 0; i < len; i++)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				s.push(str[i]);
			}
			else if (str[i] == ')' || str[i] == ']')
			{
				if (s.empty()) {
					check = true;
					break;
				}
				if ((s.top() == '(' && str[i] == ')') || (s.top() == '[' && str[i] == ']')) {
					s.pop();
				}
				else
				{
					break;
				}
			}
		}

		if (!s.empty()) check = true;

		if (check)cout << "no\n";
		else cout << "yes\n";

	}
}
