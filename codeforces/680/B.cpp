#include<bits/stdc++.h>
using namespace std;

int main(){
    int  noCity,pos,sum(0);
    cin >> noCity >> pos;
    vector<int> cities(noCity);

    for(int i = 0; i < noCity; i++) {
        cin>>cities[i];
        sum+=cities[i];
    }

    for(int i = 0; i<pos && i<=(noCity-pos); i++) {
        if(cities[pos-i-1]+cities[pos+i-1]  == 1)
            sum--;
    }

    cout<<sum<<endl;
} // namespace std
