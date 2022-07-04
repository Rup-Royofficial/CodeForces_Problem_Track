#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int l[10],s[10],r[10],p[10];
	for(int i=1;i<=4;i++){
		scanf("%d%d%d%d",&l[i],&s[i],&r[i],&p[i]);
	}
	bool flag=false;
	if(p[1]==1&&((l[1]==1||s[1]==1||r[1]==1)||(l[2]==1||s[3]==1||r[4]==1))) flag=true;
	if(p[2]==1&&((l[2]==1||s[2]==1||r[2]==1)||(l[3]==1||s[4]==1||r[1]==1))) flag=true;
	if(p[3]==1&&((l[3]==1||s[3]==1||r[3]==1)||(l[4]==1||s[1]==1||r[2]==1))) flag=true;
	if(p[4]==1&&((l[4]==1||s[4]==1||r[4]==1)||(l[1]==1||s[2]==1||r[3]==1))) flag=true;
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}