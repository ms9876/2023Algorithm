#include <iostream>=
using namespace std;

int main()
{
	int cnt = 0;
	string s;

	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i') {
			++cnt;
		}
	}

	cout << cnt;
}