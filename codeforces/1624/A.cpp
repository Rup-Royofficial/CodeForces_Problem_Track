// Problem: A. Plus One on the Subset
// Contest: Codeforces - Codeforces Round #764 (Div. 3)
// URL: https://codeforces.com/contest/1624/problem/A
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
		int size;
		cin>>size;
		int input;
		vector<int> vect;
		for(int i = 0; i<size; i++){
			cin>>input;
			vect.push_back(input);
		}
		sort(vect.begin(),vect.end());
		int minimum = vect[0];
		int maximum = vect[size-1];
		cout<<maximum-minimum<<endl;
	}
}