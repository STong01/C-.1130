#include<iostream>
#include<string>
using namespace std;

int main1()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		if (s1.size() > s2.size())
			swap(s1, s2);//��֤s1�ǽ϶��ַ���

		string str_m;//�洢������Ӵ�

		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = i; j < s2.size(); j++)
			{
				string temp = s1.substr(i, j - i + 1);//��ȡs1�е��ַ���

				if (int(s2.find(temp))<0)//��s2��Ѱ�ҽ�ȡ���ַ���
					break;
				else if (str_m.size() < temp.size())
					str_m = temp;
			}
		}

		cout << str_m.size() << endl;
	}
	return 0;
}
