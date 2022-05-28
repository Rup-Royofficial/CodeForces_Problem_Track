#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int number;
		cin>>number;
		int nOfTwo = 0,nOfThree = 0;
		while(number%2==0){
			number/=2;
			nOfTwo++;
		}
		while(number%3==0){
			number/=3;
			nOfThree++;
		}
		if(number!=1 || nOfTwo>nOfThree){
			cout<<"-1"<<endl;
		}
		else{
			cout<<(nOfThree-nOfTwo)+nOfThree<<endl;
		}
	}
}