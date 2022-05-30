// Problem: B. Equal Candies
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/B
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
		int size;
		cin>>size;
		int input;
		vector<int> array;
		for(int i = 0; i<size; i++){
			cin>>input;
			array.push_back(input);
		}
		sort(array.begin(),array.end());
		int count = 0;
		for(int i = 1; i<size; i++){
			if(array[i]!=array[0]){
				//array[i]--;
				count+=(array[i]-array[0]);
				array[i]=array[0];
			}
		}
		cout<<count<<endl;
	}
}