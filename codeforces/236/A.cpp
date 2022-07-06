#include<bits/stdc++.h>
using namespace std;

int main(){
    string inp;
    unordered_map<char,int> hash;
    cin>>inp;
    for(int i=0; i<inp.size(); i++){
        hash[inp[i]]++;
    }
    if(hash.size()%2!=0) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}