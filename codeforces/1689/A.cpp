// Problem: A. Lex String
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/contest/1689/problem/0
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
		int sA,sB,k;
		cin>>sA>>sB>>k;
		
		string stA;
		string stB;
		cin>>stA;
		cin>>stB;

		sort(stA.begin(),stA.end());
		sort(stB.begin(),stB.end());

		int a= 0,b=0,count = 0,count1=0;
		string str="";

		while(a<stA.size() && b<stB.size()){
			if(stA[a]<stB[b]){
				if(count<k){
					str+=stA[a];
					a++;
					count++;
					count1=0;
					
				}
				else{
					str+=stB[b];
					b++;
					count=0;
					count1=1;
					
				}	
			}
			else{
				if(count1<k){
					str+=stB[b];
					b++;
					count1++;
					count=0;
					
				}
				else{
					str+=stA[a];
					a++;
					count1=0;
					count=1;
					
				}	
			}
			
			
		}
		cout<<str<<endl;
	}
}