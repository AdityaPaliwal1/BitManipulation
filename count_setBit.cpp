#include <iostream>
using namespace std;

int count(int n){
	int cnt =0;
	while(n!=0){
		if(n%2==1){
			cnt++;
		
		}
		n = n/2;
	
	}

	return cnt;
}

int main(){
	int n ;
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	int ans = count(n);
	cout<<"The no. of set is "<<ans;
}
