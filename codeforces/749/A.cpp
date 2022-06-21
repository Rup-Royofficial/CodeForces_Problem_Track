#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    vector<int> vec;
    cin>>num;
    int range = num/2;
    cout<<range<<endl;
    if(num%2==0){
        while(num!=0){
            cout<<2<<" ";
            num-=2;
        }
    }
    else{
        num-=3;
        
        while(num!=0){
            num-=2;
            cout<<2<<" ";
        }
        cout<<3<<" ";
    }
}