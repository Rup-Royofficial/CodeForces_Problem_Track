#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,atmostTable(0),maxi(0);
    unordered_map<int,int> hash;
    cin>>n;
    n*=2;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        hash[arr[i]]++;
        if(hash[arr[i]]==2){
            atmostTable--;
            continue;
        }
        atmostTable++;
        maxi = max(maxi,atmostTable);
    }

    cout<<maxi<<endl;
}