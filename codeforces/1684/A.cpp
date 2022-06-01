// Problem: A. Digit Minimization
// Contest: Codeforces - Codeforces Round #792 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1684/A
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
		string str;
		cin>>str;
		if(str.length()==2){
			cout<<str[1]<<endl;
		}
		else{
			sort(str.begin(),str.end());
			cout<<str[0]<<endl;
		}
	}
}