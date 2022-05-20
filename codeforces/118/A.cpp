#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	string st;


	for(int i = 0; i<str.length(); i++){
		str[i] = tolower(str[i]);
	}

	for(int i = 0; i<str.length(); i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'){
			continue;
		}
		if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y'){
			st.push_back('.');
			st.push_back(tolower(str[i]));
		}
	}
	for(int i = 0; i<st.length(); i++){
		cout<<st[i];

	}
}