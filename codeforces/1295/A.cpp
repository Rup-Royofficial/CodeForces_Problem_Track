#include<bits/stdc++.h>
using namespace std;



int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n;
        string ans;
        cin>>n;
        if(n%2==0){
            while(n>0){
                ans+='1';
                n-=2;
            }
        }
        else{
            ans+='7';
            for(int i = 0; i<n-3; i+=2){
                ans+='1';
            }
        }
        cout<<ans<<endl;
    }
}