#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,n;
    vector<long long int> arr;
    cin>>size;
    long long int ans=0;
    for(int i = 0; i<size; i++){
        cin>>n;
        arr.push_back(n);
        ans+=n;
    }
    sort(arr.begin(),arr.end());
    if(ans%2==0){
        cout<<ans<<endl;
    }
    else{
        for(int i = 0; i<size; i++){
            if(arr[i]%2!=0)
                ans-=arr[i];
            if(ans%2==0){
                cout<<ans<<endl;
                return 0;
            }
        }

    }
}