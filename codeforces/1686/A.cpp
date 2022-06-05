// Problem: A. Everything Everywhere All But One
// Contest: Codeforces - Codeforces Round #794 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1686/A
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
		int input,totalNumberElements;
		cin>>totalNumberElements;
		vector<int> elements;
		bool flag = false;
		for(int i = 0; i<totalNumberElements; i++){
			cin>>input;
			elements.push_back(input);
		}

		for(int i = 0; i<totalNumberElements; i++){
			int sum=0;
			
			for(int j = 0; j<totalNumberElements; j++){
				if(j!=i) sum+=elements[j];
				
			}
			int max = sum/(totalNumberElements-1);
			if(sum%(totalNumberElements-1)==0){
				if(max==elements[i]) {
					cout<<"YES"<<endl;
					flag = true;
					break;
				}
			}	
		}
		if(flag==false)
			cout<<"NO"<<endl;
	}
}