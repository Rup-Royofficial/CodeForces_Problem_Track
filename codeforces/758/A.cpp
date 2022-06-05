// Problem: A. Holiday Of Equality
// Contest: Codeforces - Codeforces Round #392 (Div. 2)
// URL: https://codeforces.com/contest/758/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int total,input;
	cin>>total;
	vector<int> arr;
	for(int i = 0; i<total; i++){
		cin>>input;
		arr.push_back(input);
	}
	int max = *max_element(arr.begin(),arr.end());
	int count = 0;
	for(int i = 0; i<total; i++){
		int diff = max-arr[i];
		count+=diff;
	}
	cout<<count<<endl;
}