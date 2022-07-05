#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,counter0(0),counter1(0);
    cin>>size;
    string input;
    cin>>input;
    for(int i = 0; i<input.length(); i++){
        if(input[i]=='0'){
            counter0++;
        }
        else if(input[i]=='1'){
            counter1++;
        }
        else continue;
    }
    counter0 = min(counter0,counter1);
    counter1 = min(counter0,counter1);
    int total = counter1+counter0;
    if(total%2==0) cout<<size-total<<endl;
    else cout<<size-(total-1)<<endl;
}