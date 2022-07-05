#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int size;
        cin>>size;
        vector<int> arr(size);
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());
        if(arr[0]==arr[size-1]) cout<<size<<endl;
        else cout<<1<<endl;
    }
}