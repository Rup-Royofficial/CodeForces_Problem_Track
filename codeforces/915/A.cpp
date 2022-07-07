#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,n,maxi(0);
    bool  flag= false;
    cin >> size >> n;
    vector<int> vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }

    for(int i=0;i<size;i++){
        if(n%vec[i]==0) {
            maxi = max(vec[i],maxi);
            flag = true;
        }
    }

    if(flag == true) cout<<n/maxi<<endl;
    else cout<<*min_element(vec.begin(),vec.end())<<endl;

}