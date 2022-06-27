#include<bits/stdc++.h>
using namespace std;

int main(){
    int size = 3;
    int ohYeah(0),ans(0);
    vector<int> sexy(size);
    vector<int> hot(size);

    for(int i = 0; i < size; i++){
        cin>>sexy[i];
    }
    for(int i = 0; i < size; i++){
        cin>>hot[i];
        if(hot[i]>sexy[i]){
            ohYeah+=hot[i]-sexy[i];
        }
        else{
            ans+=(sexy[i]-hot[i])/2;
        }
    }

    if(ans>=ohYeah) cout<<"Yes";
    else cout<<"No";



}