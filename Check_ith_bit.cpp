#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool CheckBit(int  str , int index){
	if((str & (1<<index))!=0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	
	int  str;
	cout<<"Enter a binary string"<<endl;
	cin>>str;
	int i;
	cout<<"Enter the index to check "<<endl;
	cin>>i;
	
	if(CheckBit(str , i) == true){
		cout<<"Yes the bit is set";
	}
	else{
		cout<<"The bit is not set";
	}
}
