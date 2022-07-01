#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,z,kill(0);
    cin>>n>>m>>z;
    for(int k=1;k<=z;k++){
        if(k%n==0 && k%m==0) kill++;
        //n*=i;
        //m*=i;

    }

    cout<<kill<<endl;
}