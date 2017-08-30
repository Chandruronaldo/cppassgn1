#include <iostream>
using namespace std;

int main() {
	int a,b,i,c;
	c=1;
	cout<<"enter the number and the power to which it is raised";
	cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
    	c=c*a;
    }
	// your code goes here
	return 0;
}