#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int num;
		cin>>num;
		int  n = num/3;
		if(num%3==0) cout<<n<<" "<<n+1<<" "<<n-1;
		else if(num%3==1) cout<<n<<" "<<n+2<<" "<<n-1;
		else if(num%3==2) cout<<n+1<<" "<<n+2<<" "<<n-1;
		cout<<endl;
	}
}