#include<bits/stdc++.h>
using namespace std;

int combinations[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};

int main(){
    int n;
    cin>>n;
    int size = sizeof(combinations)/sizeof(combinations[0]);
    for(int i=0;i<size; i++){
        if(n%combinations[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

}