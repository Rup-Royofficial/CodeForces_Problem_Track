// Problem: A. Hulk
// Contest: Codeforces - Codeforces Round #366 (Div. 2)
// URL: https://codeforces.com/problemset/problem/705/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int input;
	cin>>input;
	if(input==1){
		cout<<"I hate it"<<endl;
		return 0;
	}
	string s1 = "I hate that";
	string s2 = "I love that";
	string ans;
	//ans+="I";
	for(int i = 1; i<=input; i++){
		if(i==input){
			if(i%2==0) {
				ans+="I love it";
				cout<<ans<<endl;
				return 0;
			}
			else{
				ans+="I hate it";
				cout<<ans<<endl;
				return 0;
			}
		}
		if(i%2!=0) ans+=s1+" ";
		else ans+=s2+" ";
	}
}