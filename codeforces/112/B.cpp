#include<bits/stdc++.h>
using namespace std;  

int main(){
    int n2,x,y;
    cin>>n2>>x>>y;
    n2/=2;
    if((x==n2||x==n2+1)&&(y==n2||y==n2+1))  cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}