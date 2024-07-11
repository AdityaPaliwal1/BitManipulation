#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int a = 10;
	int b = 13;
	
	cout<<"Before swapping "<<endl;
	cout<<"Value of a is "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
	
	a = a^b;
	b = a^b;
	a = a^b;
	
	cout<<"After swapping "<<endl;
	cout<<"Value of a is "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
}
