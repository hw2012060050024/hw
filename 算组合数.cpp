// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
int di ( int a ){

	   if(1==a)return 1
;else return a*di(a-1)

;    }

int main()
{
	int m,n,out;

cout<<"������n��m"<<endl;
cin>>n;
cin>>m;
out=di(n)/di(m);
out/=di(n-m);
cout<<out<<endl;

}