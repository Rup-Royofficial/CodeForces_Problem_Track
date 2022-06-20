#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,count(0);
    cin>>num;
    while(num>9){
        count++;
        num++;
        while(num%10==0)
            num/=10;    
    }
    count+=9;
    cout<<count;
}