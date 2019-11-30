#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s1;
	while (cin >> s1)
	{
		int i;
		int tmp = s1.length();
		for (i = 0; i < tmp / 2; i++)
		{
			int cur;
			cur = s1[i];
			s1[i] = s1[tmp - 1 - i];
			s1[tmp - 1 - i] = cur;
		}
		cout << s1 << endl;
	}

	system("pause");
	return 0;
}