#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,sumElement(0);
    cin>>size;
    vector<int> currency(size);
    for(int i = 0; i<size; i++){
        cin>>currency[i];
        if(currency[i]==1){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<1<<endl;

}