#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int size1,size2;
    size1 = a.size();
    size2 = b.size();
    if(a==b) cout<<-1;
    else cout<<max(size1,size2);
}