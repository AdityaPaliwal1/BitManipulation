#include <iostream>
using namespace std;

int main(){
	
	int n ;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int i ;
	cout<<"Enter the bit index you want to toggle "<<endl;
	cin>>i;
	
	int ans = (n^(1<<i));
	cout<<"After toggle the number is "<<ans;
}
