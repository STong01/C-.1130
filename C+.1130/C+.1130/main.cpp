#include<iostream>
#include<string>
using namespace std;

int main1()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		if (s1.size() > s2.size())
			swap(s1, s2);//保证s1是较短字符串

		string str_m;//存储最长公共子串

		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = i; j < s2.size(); j++)
			{
				string temp = s1.substr(i, j - i + 1);//截取s1中的字符串

				if (int(s2.find(temp))<0)//在s2中寻找截取的字符串
					break;
				else if (str_m.size() < temp.size())
					str_m = temp;
			}
		}

		cout << str_m.size() << endl;
	}
	return 0;
}
