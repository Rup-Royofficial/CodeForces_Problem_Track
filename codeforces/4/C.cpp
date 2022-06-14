// Problem: C. Registration system
// Contest: Codeforces - Codeforces Beta Round #4 (Div. 2 Only)
// URL: https://codeforces.com/contest/4/problem/C
// Memory Limit: 64 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	unordered_map<string,int> has;
	while(testcase--){
		string temp;
		cin>>temp;
		if(has[temp]==0){
			has[temp]++;
			cout<<"OK"<<endl;
		}
		else{ 
			
			cout<<temp<<has[temp]<<endl;
			has[temp]++;
		}
	}
}