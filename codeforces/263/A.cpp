#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>> matrix;
    int n;
    for(int i = 0; i<5; i++){
        vector<int> r;
        for(int j = 0; j<5; j++){
            cin>>n;
            r.push_back(n);
        }
        matrix.push_back(r);
    }
    int row = 0,col = 0;
    for(int i =0; i<5; i++){
        for(int j = 0; j<5; j++){
            if(matrix[i][j]==1){
                row=i;
                col=j;
                break;
            }
        }
    }
    int ans = abs(3-(row+1))+abs(3-(col+1));
    cout<<ans;
    
}