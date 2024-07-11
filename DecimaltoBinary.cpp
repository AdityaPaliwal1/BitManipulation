#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string Converttobinary(int n){
	string str = " ";
	while(n!=0){
		if(n%2==1){
			str+= "1";
		}
		else{
			str+= "0";
		}
		n = n/2;
	}
	  reverse(str.begin(), str.end());
	return str;
}

int main(){
	
	int n;
	cout<<"Enter a Integer "<<endl;
	cin>>n;
	cout<<"Binary representation of "<<n<<" is: "<<Converttobinary(n);
}
