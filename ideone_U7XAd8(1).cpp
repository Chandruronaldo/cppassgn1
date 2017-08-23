#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"enter the two numbers";
	cin>>a>>b;
            cout<<"specify the operation   1.add 2. subtract 3.multiply 4. divide";
            cin>>c;
            switch(c)
            {
            case 1:cout<<"the sum is "<<a+b;
            break;
            case 2:cout<<"the difference is "<<a-b;
            break;
            case 3:cout<<"the product is "<<a*b;
            break;
            case 4:cout<<"the quotient is "<<a/b;
            break;
            }
          
	
	// your code goes here
	return 0;
}