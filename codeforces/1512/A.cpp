// Problem: A. Spy Detected!
// Contest: Codeforces - Codeforces Round #713 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1512/A
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
		int arr;
		vector<int> array;
		unordered_map<int,int> hash;
		
		for(int i = 0; i<size; i++){
			cin>>arr;
			array.push_back(arr);
			hash[array[i]]++;
		}
		for(int i = 0; i<size; i++){
			if(hash[array[i]]==1){
				cout<<i+1<<endl;
				break;
			}
		}
		
	}
}