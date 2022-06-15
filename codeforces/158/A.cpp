// Problem: A. Next Round
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,n,k;
	cin>>n>>k;
	vector<int> v;
	int count = 0;
	for(int i = 0; i<n; i++){
		cin>>a;
		v.push_back(a);
	}
	for(int j = 0; j<n; j++){
		if(v[j]>=v[k-1] && v[j]>0) {
			count++;
		}
	}
	cout<<count<<endl;
}