// Problem: B. Promo
// Contest: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1697/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int s,q;
	cin>>s>>q;
	long long int arr1[s];
	long long int arr2[s];
	
	for(int i = 1; i<=s; i++){
		cin>>arr1[i];
	}
	sort(arr1+1,arr1+s+1);
	reverse(arr1+1,arr1+s+1);
	for(int i = 1; i<=s; i++){
		arr2[i]=arr2[i-1]+arr1[i];
	}
	while(q--){
		long long int x,y;
		cin>>x>>y;
		y=x-y;
		cout<<arr2[x]-arr2[y]<<endl;
	}
	
}