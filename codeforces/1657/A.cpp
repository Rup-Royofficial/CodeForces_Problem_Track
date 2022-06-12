// Problem: A. Integer Moves
// Contest: Codeforces - Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1657/A
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
		int x2,y2;
		cin>>x2>>y2;
		double d = sqrt(pow(x2,2)+pow(y2,2));
		if(x2==0 && y2==0) {
			cout<<0<<endl;
		}
		else if(d == (int)d){
			cout<<1<<endl;
		}
		else{
			cout<<2<<endl;
		}
	}
}