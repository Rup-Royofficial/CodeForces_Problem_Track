// Problem: A. Lucky?
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		string s;
		cin>>s;
		int first_3 =0,last_3 = 0;
		for(int i = 0; i<3; i++){
			first_3+=s[i]+'0';
		}
		for(int i = 3; i<6; i++){
			last_3+=s[i]+'0';
		}
		if(first_3==last_3){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}