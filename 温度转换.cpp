// ConsoleApplication5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	float f=0,c=0;
	int a=0;
	cout<<"����ת��������1������ת��������2"<<endl;
	
	cin>>a;
	switch(a){

 case 1: cout<<"�����뻪���¶�"<<endl;
  cin>>f;
  c=(f-32)/9*5;
  cout<<c;
  break;
 case 2:cout<<"�����������¶�"<<endl;
	 cin>>c;
	 f=c*9/5+32;
	 cout<<f;

	}

}
