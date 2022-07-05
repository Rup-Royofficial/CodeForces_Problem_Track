#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int> arr(size*2);
    for(int i = 0; i < size*2; i+=2){
        cin>>arr[i]>>arr[i+1];
    }

    for(int i = 0; i < arr.size(); i+=2){
        if(arr[i]==arr[i+1]) continue;
        else{
            cout<<"rated"<<endl;
            return 0;
        }
    }

    bool flag = false;
    for(int i = 0; i < arr.size()-2; i+=2){
        if(arr[i]>=arr[i+2]) continue;
        else{
            cout<<"unrated"<<endl;
            return 0;
        }
    }

    cout<<"maybe"<<endl;
}