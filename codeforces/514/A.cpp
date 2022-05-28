#include<bits/stdc++.h>
using namespace std;

int main(){
	string number;
	cin>>number;
	int len = number.size();
	if(number[len-1]=='9' && len>1){
		number[len-1]='0';
	}
	for(int i = 0; i<len; i++){
		int digit = number[i]-'0';
		if(digit>=5 && digit!=9){
			digit = 9 - digit;
			number[i]=digit+'0';
		}
		if(digit==9 && i>0){
			digit=9-digit;
			number[i]=digit+'0';
		}
	}
	cout<<number;
}