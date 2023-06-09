#include <iostream>
#include <stack>
using namespace std;

stack <int> s;
int s;
long long int res = 0;

int main()
{
	cin >> s;
	for (int i = 0; i < s; i++)
	{
		int x;
		cin >> x;

		while (!s.empty() && s.top() <= x) 
		{
			s.pop(); 
		}
		s.push(x);
		res += s.size() - 1;
	}

	cout << res;
}