#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int n;
		cin>>n;
		int x;
		for(int k = 2; k<=10e7; k++){
			int power = pow(2,k);
			--power;
			if(n%power==0){
				cout<<n/power<<endl;
				break;
			}
		}
	}
}