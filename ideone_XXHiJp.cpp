#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"enter the data type of the variable 1. integer 2. float 3.character 4.boolean";
	cin>>a;
	switch(a)
	{
		case 1:int b;
		cout<<"enter the value of the variable";
		cin>>b;
		cout<<"the value of the integral variable is "<<b;
		break;
		       
		case 2:float c;
		cout<<"enter the value of the variable";
		cin>>c;
		cout<<"the value of the float variable is "<<c;
		break;
		
		case 3:char d;
		cout<<"enter the value of the variable";
		cin>>d;
		cout<<"the value of the character variable is "<<d;
		break;
			
		case 4:bool e;
		cout<<"enter the value of the variable";
		cin>>e;
		cout<<"the value of the boolean variable is "<<e;
		break;	
		       
	}
	// your code goes here
	return 0;
}
