#include <algorithm>
#include <iostream>
#include <string>

using namespace std;



int main(){
	int str;
	cout<<"Enter the binary string "<<endl;
	cin>>str;
	int i;
	cout<<"Enter the index "<<endl;
	cin>>i;
	
	int num = ((str | (1<<i)));
	cout<<num;
}
