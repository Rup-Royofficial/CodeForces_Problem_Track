// Problem: A. Dreamoon and Stairs
// Contest: Codeforces - Codeforces Round #272 (Div. 2)
// URL: https://codeforces.com/contest/476/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	double n;
	double m;
	cin>>n>>m;
	//int count = 1;
	int step = 0;
	if(m>n){
		cout<<-1<<endl;
		return 0;
	}
	else{
		for(double i = round(n/2); i<=n; i++){
			if(int(i)%int(m)==0){
				cout<<int(i)<<endl;
				return 0;
			}
		}
	}
	//cout<<count<<endl;
}