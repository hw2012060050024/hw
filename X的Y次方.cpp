// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
float fang(float x,int y)
{
if(1==y) return x;
else return (x*fang(x,y-1));

}
int main()
{
	int y;
	float x;
	cout<<"������X��Y"<<endl;
	cin>>x;
	cin>>y;
	cout<<fang(x,y);
}

