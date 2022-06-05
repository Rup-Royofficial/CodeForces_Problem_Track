// Problem: A. Colorful Stones (Simplified Edition)
// Contest: Codeforces - Codeforces Round #162 (Div. 2)
// URL: https://codeforces.com/contest/265/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	string movSt,insSt;
	cin>>movSt>>insSt;
	int  i = 0;
	for(int j = 0; j<=insSt.size(); j++){
		if(movSt[i]==insSt[j]) {
			++i;
		}
	}
	cout<<i+1<<endl;
	return 0;
}