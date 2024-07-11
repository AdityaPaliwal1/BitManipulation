#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int ConverttoDecimal( string str){
	int num = 0, p_of_2 = 1;
	int len = str.length();
		for(int i=len-1 ; i>=0;i--){
			if(str[i] == '1'){
				num = num + p_of_2;
				
			}
			p_of_2 = p_of_2*2;
		}
		return num;
}
int main(){
	string str;
	cout<<"Enter a binary string"<<endl;
	cin>>str;
	
	cout<<"Decimal representation of "<<str<<" is "<<ConverttoDecimal(str);
}
