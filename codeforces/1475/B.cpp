#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n;
        cin>>n;
        if( n%2020 > n/2020) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}