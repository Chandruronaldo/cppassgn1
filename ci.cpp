#include <iostream>
#include <math.h>
using namespace std;

int main() {
		float p,r,i;
	int n;
	cout<<"enter the principal amount , rate of interest and number of years";
	cin>>p>>r>>n;
	i=(1+r/100);
	cout<<"the interest is"<<p*pow(i,n)-p;
	
	// your code goes here
	return 0;
}