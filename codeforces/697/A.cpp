#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,s,x;
    cin>>t>>s>>x;
    if(x<t) cout<<"NO";
    else if(t==x) cout<<"YES";
    else if(x<(s+t)) cout<<"NO";
    
    
    //eta exactly bujhini
    else if((x-t)%s<2) cout<<"YES";
    else cout<<"NO";    
}