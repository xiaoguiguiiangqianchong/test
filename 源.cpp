#include<iostream>
#include"ƴ���ַ���.h"
using namespace std;

int main()
{   
	//pingjie();
	char str[200];
	while (cin.getline(str, 200))
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == 'Z')
			{
				str[i] = 'A'; continue;
			//	cout << "ִ��Z" << endl;
			}
			if (str[i] == 'z')
			{
				str[i] = 'a';
			//	cout << "ִ��z" << endl;
				continue;
			}
			if (str[i] == ' ')
			{
			//	cout << "�ո�" << endl;
				continue;
			}
			{str[i] = str[i] + 1;
			//cout << "��1"<<endl;
			}
			


		}
		{cout << str << endl;
			//cout << "���" << endl;
			}
		system("pause");
		return 0;
	}
}