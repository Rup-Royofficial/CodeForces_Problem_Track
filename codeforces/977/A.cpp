#include<bits/stdc++.h>
using namespace std;


int main(){
    int num,k;
    cin>>num>>k;
    string str= to_string(num);
    int size = str.length();
    while(k!=0){
        if(str[size-1]=='0'){
            num/=10;
            k--;
            str=to_string(num);
            size = str.length();
        }
        else{
            num-=1;
            k--;
            str=to_string(num);
            size = str.length();
            //size--;
        }
    }

    cout<<num;



}