#include<bits/stdc++.h>
using namespace std;

int main(){
    int query;
    cin>>query;
    int x = 0;
    string i;
    while(query--){
        cin>>i;
        for(int j = 0; j<i.size(); j++){
            if((i[j]>='A'&& i[j]<='Z') && (i[j+1]=='+') && (i[j+2]=='+')){
                x++;
                break;
            }
            else if((i[j]=='+') && (i[j+1]=='+') && (i[j+2]>='A'&& i[j+2]<='Z')){
                ++x;
                break;
            }
            else if((i[j]>='A'&& i[j]<='Z') && (i[j+1]=='-') && (i[j+2]=='-')){
                x--;
                break;
            }
            else if((i[j]=='-') && (i[j+1]=='-') && (i[j+2]>='A'&& i[j+2]<='Z')){
                --x;
                break;
            }
        }
    }
    cout<<x;
}