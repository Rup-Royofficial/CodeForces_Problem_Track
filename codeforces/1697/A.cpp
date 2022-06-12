

#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int s,e,n;
		cin>>s>>e;
		int counter = 0;
		vector<int> p;
		for(int i = 0; i<s; i++){
			cin>>n;
			p.push_back(n);
		}
		for(int i = 0; i<s; i++){
			counter+= p[i];
		}
		if(counter>e)
			cout<<counter-e<<endl;
		else
			cout<<0<<endl;
	}
}