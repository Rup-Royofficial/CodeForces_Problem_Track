// Problem: A. Sereja and Mugs
// Contest: Codeforces - Codeforces Round #243 (Div. 2)
// URL: https://codeforces.com/contest/426/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h.>
using namespace std;

int main(){
	int numMugs,volCup;
	vector<int> volMugs;
	cin>>numMugs>>volCup;
	//Count the sum of volume of mugs
	//select the max_element out of the input volume of mugs
	//If the difference between the sum and max_element is grater than the volume of cup , print NO, otherwise yes
	int sum = 0;
	for(int i = 0; i<numMugs; i++){
		int input;
		cin>>input;
		volMugs.push_back(input);
		sum+=volMugs[i];
	}
	int max = *max_element(volMugs.begin(),volMugs.end());
	int diff = sum-max;
	
	if(diff<=volCup) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}