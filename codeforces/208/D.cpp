#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int size,sum(0);
    cin>>size;
    vector<long long int> arr(size),arr2(5),output(5);

    //int a,b,c,d,e,k(0),j(0);
    for(long long int i = 0; i < size; i++){
        cin>>arr[i];
    }

    for(long long int i = 0; i < 5; i++){
        cin>>arr2[i];
        output[i] = 0;
    }

    for(long long int i=0; i < size; i++){
        sum+=arr[i];
        for(long long int j=4; j >= 0; j--){
            output[j]+=sum/arr2[j];
            sum%=arr2[j];
        }
    }

    for(long long int i=0; i < 5; i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    cout<<sum;

    
    
}