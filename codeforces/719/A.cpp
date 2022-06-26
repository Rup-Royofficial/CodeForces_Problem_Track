#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int> moon(size);
    for(int i = 0; i<size; i++){
        cin>>moon[i];
    }

    if(size==1 && moon[0]==0){
        cout<<"UP"<<endl;
        return 0;
    }
    else if(size==1 && moon[size-1]==15){
        cout<<"DOWN"<<endl;
        return 0;
    }
    else if(size==1 && moon[size-1]!=0){
        cout<<"-1"<<endl;
        return 0;
    }

    else if(moon[size-2]<moon[size-1] && moon[size-1]!=15){
        cout<<"UP"<<endl;
        return 0;
    }
    else if(moon[size-2]>moon[size-1] && moon[size-1]!=0){
        cout<<"DOWN"<<endl;
        return 0;
    }
    else if(moon[size-1]==15 && moon[size-1]>moon[size-2]){
        cout<<"DOWN"<<endl;
        return 0;
    }
    else if(moon[size-1]==0 && moon[size-2]>moon[size-1]){
        cout<<"UP"<<endl;
        return 0;
    }
    
}