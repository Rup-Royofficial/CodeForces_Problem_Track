#include<bits/stdc++.h>
using namespace std;

int main(){
    int itr,counter(1);
    cin>>itr;
    vector<int> arr1(itr*2);
    vector<int> arr2(itr*2);
    for(int i = 1; i <=pow(itr,2); i++){
        int a,b;
        cin>>a>>b;
        if((arr1[a]+arr2[b])==0){
            cout<<i<<" ";
            arr1[a]=1;
            arr2[b]=1;  
        }
    }

}