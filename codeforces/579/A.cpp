#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int counter(0),num;
    cin>>num;
    string str;
    while(num>0) {
        if(num&1) counter++;
        num>>=1;
    }

    cout<<counter<<endl;
}