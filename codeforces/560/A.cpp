#include<bits/stdc++.h>
using namespace std;


    //if the currency contains 1, then any sum of money can be formed
    //if 1 is not present in currency, then any sum of money can't be formed


int main(){
    int size,sumElement(0);
    cin>>size;
    vector<int> currency(size);

    //so look for 1 in the currency , if 1 is present then minimum currency to forme big amount can be done by 1
    //so if 1 is present, we don't need any other currency to think about
    
    //1 is enough to create any sum of money
    //so if 1 is present out: -1;(as we have 1 and don't need any thing else)

    //if 1 is not present in the currency, then the minimum currency needed will be 1
    for(int i = 0; i<size; i++){
        cin>>currency[i];
        if(currency[i]==1){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<1<<endl;

}