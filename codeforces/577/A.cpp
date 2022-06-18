#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    long long int sT,fN;
    long long int cunt = 0;

    cin>>sT>>fN;

    vector<vector<long long int>> v;
    vector<long long int> rowSt;
    vector<long long int> counter;

    for(long long int i = 1;i<=sT; i++){
        rowSt.clear();
        for(long long int j = i; j<=sT*i; j+=i){
            rowSt.push_back(j);
            counter.push_back(j);
        }
        v.push_back(rowSt);
    }


    cout<<count(counter.begin(),counter.end(),fN)<<endl;
}
*/

int main(){
    int n,x;
    cin>>n>>x;
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(x%i==0 && x/i<=n) count++;
    }
    cout<<count<<endl;
}