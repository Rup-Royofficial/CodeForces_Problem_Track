#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	unordered_map<string,int> has;
	while(testcase--){
		string temp;
		cin>>temp;
		if(has[temp]==0){
			has[temp]++;
			cout<<"OK"<<endl;
		}
		else{ 
			
			cout<<temp<<has[temp]<<endl;
			has[temp]++;
		}
	}
}