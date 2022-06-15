#include<bits/stdc++.h>
using namespace std;

int main(){
    int totalN,ridesByM,priceby1,priceofM;
    cin>>totalN>>ridesByM>>priceby1>>priceofM;
    if(ridesByM*priceby1<=priceofM){
        cout<<totalN*priceby1<<endl;
    }
    else{
        cout<<(totalN/ridesByM)*priceofM + min((totalN%ridesByM)*priceby1,priceofM)<<endl;
    }


}