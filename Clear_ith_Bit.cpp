#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int ClearIthBit(int n , int index){
	return ((n^(1<<index)));
}

int main(){
	int N;
	cout<<"Enter the binary string "<<endl;
	cin>>N;
	int i;
	cout<<"Enter the index "<<endl;
	cin>>i;
	
	cout<<"After clearing the "<<i<<" bit "<<ClearIthBit(N,i);
}
