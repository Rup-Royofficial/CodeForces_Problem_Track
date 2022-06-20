#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,size,sum(0);
    cin>>test>>size;

    vector<string> v(test);
    vector<int> points(size);

    

    //taking the mcq inputs
    for(int i = 0;i<test; i++){
        cin>>v[i];
    }

    //taking the points input
    for(int i = 0; i<size; i++){
        cin>>points[i];
    }

    for(int i = 0; i<size; i++){
        int a=0,b=0,c=0,d=0,e=0;
        for(int j = 0; j<test; j++){
            if(v[j][i]=='A') a++;
            else if(v[j][i]=='B') b++;
            else if(v[j][i]=='C') c++; 
            else if(v[j][i]=='D') d++;
            else e++;
        }
        sum += max({a,b,c,d,e})*points[i];
    }

    cout<<sum<<endl;

}