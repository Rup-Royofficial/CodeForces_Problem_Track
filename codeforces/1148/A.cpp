#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a==b) cout<<2*a+2*c<<endl;
    else if(a<b) cout<<2*a+2*c +1<<endl;
    else cout<<2*b+2*c+1<<endl;
}