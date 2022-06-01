// Problem: A. Fake NP
// Contest: Codeforces - Codeforces Round #411 (Div. 2)
// URL: https://codeforces.com/contest/805/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,r;
	cin>>l>>r;
	if(l==r) {
		cout<<l;
	}
	else if(r-l==3 && r%3==0) {
		cout<<3;
	}
	else{
		cout<<2;
	}
}