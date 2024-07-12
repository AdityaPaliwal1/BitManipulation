#include <iostream>
using namespace std;

int main(){
	int n ;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	if( (n & (n-1)) == 0){
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
}
