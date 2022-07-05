#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int> arr(size);
    if(size<3) {
        cout<<"NO";
        return 0;
    }
    else{
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        for(int i=0; i<size-2; i++){
            if((arr[i]+arr[i+1])>arr[i+2]) {
                cout<<"YES";
                return 0;
            }
        }
        cout<<"NO";
    }
}