// Problem: A. Beat The Odds
// Contest: Codeforces - CodeCraft-22 and Codeforces Round #795 (Div. 2)
// URL: https://codeforces.com/contest/1691/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;


int solver(vector<int> &arr, int size){
	int countOdd = 0;
	for(int i = 0; i<size; i++){
		if(arr[i]%2){
			countOdd++;
		}
	}	
	return min(size-countOdd,countOdd);
	
}

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int size;
		cin>>size;
		int input;
		vector<int> arr;
		for(int i =0;i<size; i++){
			cin>>input;
			arr.push_back(input);
		}
		cout<<solver(arr,size)<<endl;
		
	}
}