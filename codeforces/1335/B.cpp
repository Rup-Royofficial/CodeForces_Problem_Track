// Problem: B. Construct the String
// Contest: Codeforces - Codeforces Round #634 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1335/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		string str;
		int n,a,b;
		cin>>n>>a>>b;
		char it = 'a';
		for(int i = 0,count = 0; i<n ; count++,i++){
			if(count==b){
				it='a';
				count = 0;
			}
			
			str+=it;
			it++;
			
			if(it>'z'){
				it='a';
			}
		}
		cout<<str<<endl;
	}
}