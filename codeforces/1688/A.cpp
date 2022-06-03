// Problem: A. Cirno's Perfect Bitmasks Classroom
// Contest: Codeforces - Codeforces Round #796 (Div. 2)
// URL: https://codeforces.com/contest/1688/problem/0
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
		int a;
		cin>>a;
		if(a==1) {
			cout<<3<<endl;
			continue;
		}
		if(__builtin_popcount(a)==1){
			cout<<a+1<<endl;
		}
		else{
			int ans = 1;
			for(int j = 0; j< 32; j++){
				if(a&(1<<j)){
					ans = (1<<j);
					break;
				}
			}
			cout<<ans<<endl;
		}
	}
}