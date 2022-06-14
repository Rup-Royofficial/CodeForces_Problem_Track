#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int n,timur;
		vector<int> v;
		for(int i = 0; i<4; i++){
			cin>>n;
			if(i==0) {
				timur = n;
			}
			v.push_back(n);
		}
		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		for(int i = 0; i<4; i++){
			if(v[i]==timur) cout<<i<<endl;
		}
	}
}