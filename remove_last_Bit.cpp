#include <iostream>
using namespace std;

int main(){
		int n ;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	int ans  = (n & (n-1));
	cout<<"After removing the rightmost set bit, the number is "<<ans;
}
