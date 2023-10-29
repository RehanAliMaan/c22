#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int h,m,s,sec;
	cout<<"enter the seconds"<<endl;
	cin>>sec;
	s=sec%60;
	h=sec/3600;
	sec=sec%3600;
	m=sec/60;
	cout<<"HH-MM-SS"<<h<<":"<<m<<":"<<s<<endl;
	
}