#include<bits/stdc++.h>
using namespace std;

int main(){
    int aSum(0),bSum(0),a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;

    aSum = a1+a2+a3;
    bSum = b1+b2+b3;


    int minA = (aSum+5-1)/5;
    int minB = (bSum+10-1)/10;
    if((minA+minB) <=n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

}