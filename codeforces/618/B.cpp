#include<bits/stdc++.h>
using namespace std;



int main(){
    int size;
    cin >> size;
    int arr[size][size];
    vector<int> insider(size);


    for(int i = 0; i < size; i++){
        int maxi = 0;
        for (int j = 0; j < size; j++){
            cin>>arr[i][j];
            maxi = max(maxi,arr[i][j]);
        }
        insider[i]=(maxi);
    }

    bool flag = false;
    for(int i = 0; i < size; i++){
        if(insider[i] == size-1 && !flag){
            insider[i] = size;
            flag = true;
            cout<<insider[i]<<" ";
            continue;
        }
        cout<<insider[i]<<" ";
    }

    
}