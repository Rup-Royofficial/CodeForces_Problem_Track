// Problem: A. Way Too Long Words
// Contest: Codeforces - Codeforces Beta Round #65 (Div. 2)
// URL: https://codeforces.com/problemset/problem/71/A
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
		string w;
		cin>>w;
		if(w.size()>10){
			cout<<w[0]<<w.size()-2<<w[w.size()-1]<<endl;
		}
		else{
			cout<<w<<endl;
		}
	}
}