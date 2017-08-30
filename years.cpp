#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int d,y,w;
	cout<<" enter the number of days";
	cin>>d;
	w=d/7;
	y=w/52;
	d=mod(d/7);
    cout<<"\n the no of years are"<<y<<"\n no of weeks are"<<w<<"\n number of days are"<<d;	
	
	// your code goes here
	return 0;
}