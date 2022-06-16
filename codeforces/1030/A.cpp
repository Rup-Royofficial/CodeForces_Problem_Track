#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    cin>>n;
    vector<int> ul;
    for(int i = 0; i<n; i++){
        cin>>a;
        if(a==0) {
            ul.push_back(a);
        }
        else{
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    return 0;
}