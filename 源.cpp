#include<iostream>
#include"拼接字符串.h"
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
			//	cout << "执行Z" << endl;
			}
			if (str[i] == 'z')
			{
				str[i] = 'a';
			//	cout << "执行z" << endl;
				continue;
			}
			if (str[i] == ' ')
			{
			//	cout << "空格" << endl;
				continue;
			}
			{str[i] = str[i] + 1;
			//cout << "加1"<<endl;
			}
			


		}
		{cout << str << endl;
			//cout << "输出" << endl;
			}
		system("pause");
		return 0;
	}
}