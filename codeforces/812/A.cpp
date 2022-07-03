#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    int a,b,c,d,dtots(0);
    bool flag = false;
    for(int i = 0; i<4; i++){
        cin>>a>>b>>c>>d;
        if(d==1 && a==0 && b==0 && c==0) flag = true;
        else if(d==1 &&( a!=0 || b!=0 || c!=0)) {
            cout<<"YES"<<endl;
            return 0;
        }
        dtots+=d;
    }
    if(dtots%2!=0 && flag == true) cout<<"NO"<<endl;
    else if(dtots==0 && flag==false) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    */
   int arr[5][5];
   for(int i = 1; i<=4; i++){
        for(int j = 1; j<=4; j++){
            cin>>arr[i][j];
        }
   }

   if(arr[1][4]==1){
        if(arr[1][1]==1 || arr[1][2]==1 || arr[1][3]==1 || arr[3][2]==1 || arr[2][1]==1 || arr[4][3]==1){
            cout<<"YES"<<endl;
            return 0;
        }
   }

   if(arr[2][4]==1){
        if(arr[2][1]==1 || arr[2][2]==1 || arr[2][3]==1 || arr[4][2]==1 || arr[1][3]==1 || arr[3][1]==1){
            cout<<"YES"<<endl;
            return 0;
        }
   }

   if(arr[3][4]==1){
        if(arr[3][1]==1 || arr[3][2]==1 || arr[3][3]==1 || arr[2][3]==1 || arr[1][2]==1 || arr[4][1]==1){
            cout<<"YES"<<endl;
            return 0;
        }
   }

   if(arr[4][4]==1){
        if(arr[4][1]==1 || arr[4][2]==1 || arr[4][3]==1 || arr[3][3]==1 || arr[2][2]==1 || arr[1][1]==1){
            cout<<"YES"<<endl;
            return 0;
        }
   }

   cout<<"NO"<<endl;
}