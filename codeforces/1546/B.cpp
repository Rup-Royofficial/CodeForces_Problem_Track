#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n,m,xOR(0);
        cin>>n>>m;
        vector<string> vec(n+(n-1));
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i = n; i<(n+(n-1)); i++){
            cin>>vec[i];
        }

        for(int i = 0; i<m; i++){

            xOR = 0;
            for(int j = 0; j<vec.size(); j++){
                xOR = xOR^(int)vec[j].at(i);
            }
            if(xOR!=0) {
                cout<<(char)xOR;
            }
        }
        cout<<endl;
    }
}