#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase,sumX(0),sumY(0),sumZ(0),x,y,z;
    cin>>testcase;
    while(testcase--){
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if(sumX==0 && sumY==0 && sumZ==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}