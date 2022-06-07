// Problem: A. Print a Pedestal (Codeforces logo?)
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/0
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
		//vector<int> w;
		int wholeNum;
		cin>>wholeNum;
		int k = wholeNum/3;
		if(k*3==wholeNum){
			cout<<k<<" "<<k+1<<" "<<k-1<<endl;
		}
		else{
			int p = wholeNum%3;
			if(p==1) cout<<k<<" "<<k+p+1<<" "<<k-1<<endl;
			else cout<<k+1<<" "<<k+p<<" "<<k-1<<endl;
		}
		
	}
}