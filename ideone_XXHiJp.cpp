#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"enter the data type of the variable";
	cin>>a;
	switch(a)
	{
		case 1:int b;
		cout<<"entr the value of the variable"<<b;
		cin>>b;
		cout<<"the value of the integral variable is "<<b;
		break;
		       
		case 2:float c;
		cout<<"entr the value of the variable"<<c;
		cin>>b;
		cout<<"the value of the float variable is "<<c;
		break;
		
		case 3:char d;
		cout<<"entr the value of the variable"<<d;
		cin>>b;
		cout<<"the value of the character variable is "<<d;
		break;
		       
	}
	// your code goes here
	return 0;
}