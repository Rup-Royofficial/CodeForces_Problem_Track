#include<bits/stdc++.h>
using namespace std;

int main(){
    int c1,c2,c3,c4,c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    int total = c1+c2+c3+c4+c5;
    if(total%5==0){
        total = total/5;
    }
    else{
        cout<<-1<<endl;
        return 0;
    }

    if(total!=0) cout<<total<<endl;
    else cout<<-1<<endl;
}