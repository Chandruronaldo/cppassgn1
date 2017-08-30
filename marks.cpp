#include <iostream>
using namespace std;

int main() {
	float s[5],t=0,a,p,m;
	cout<<"enter the max mark";
	cin>>m;
	cout<<"enter the five subject marks";
	for(int i=0;i<5;i++)
	{cin>>s[i];}
	for(int i=0;i<5;i++)
	{
		t=t+s[i];
	}
	a=t/5;
	p=a/m*100;
	// your code goes here
	return 0;
}