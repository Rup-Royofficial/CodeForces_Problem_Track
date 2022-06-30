#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int num;
    cin>>num;
    vector<long long int> arr;

    for(long long int i = 2; i<num; i++){
        if(num%i==0){
            //cout<<i<<endl;
            cout<<i<<num/i;
            return 0;
        }    
        //if(i==num) break;
    }

    
}