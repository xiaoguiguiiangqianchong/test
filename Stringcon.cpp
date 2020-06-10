#include<iostream>
uisng namespace std;
int main()
{   /*1.数据部分，用字符数组来标记两个20以内的字符串，由于需要连接，故将长度设为40*/
	char str1[40],str2[40]; int length1,length2;
	/*2.字符串的输入*用getline 来输入字符串*/
	cin.getline(str1,20);
	cin.getline(str2,20);
	/*3.字符数组长度的计算 
	     如果是整型 实型数组，则直接使用下标加1即可，
	     但是对于任意一个字符型数组，由于其中最后一个字符必然是以'\0' 结束，故可以
		 最后一个字符是否等于'\0'来控制循环是否继续，是否循环计数，来计算其长度
	问：如果是输入的是不超过20个数目的整型或者是浮点型数组呢？*/	 	
	for(length1=0;str1[length1]!='\0';length1++);	
	for(length1=0;str2[length2]!='\0';length2++);
	/*4.比较长度根据比较结果将短的接到长的后面*/
	if(length1>=length2)
	{for(length2=0;str2[length2]!='\0';length2++)
		str1[length1++]=str2[length2];
	    str1[length1++]='\0';
		
	}
    else
	{for(length1=0;str1[length1]!='\0';length1++)
		str2[length2++]=str1[length1];
	    str2[length2++]='\0';
		
	}
	cout<<str1<<endl;
	cout<<str2<<endl;
	
	
	
	
}