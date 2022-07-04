#include<bits/stdc++.h>
using namespace std;

int main(){
   /* 
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
   */

  int l[5],s[5],r[5],p[5];
  for(int i=1;i<=4;i++){
    cin>>l[i]>>s[i]>>r[i]>>p[i];
  }
    bool flag = false;
  if(p[1]==1 && ((l[1]==1 || s[1]==1 || r[1]==1) || (l[2]==1 || s[3]==1 || r[4]==1))){
    flag = true;
    //cout<<"YES"<<endl;
    //return 0;
  }
  if(p[2]==1 && ((l[2]==1 || s[2]==1 || r[2]==1) || (l[3]==1 || s[4]==1 || r[1]==1))){
    flag = true;
    //cout<<"YES"<<endl;
    //return 0;
  }
  if(p[3]==1 && ((l[3]==1 || s[3]==1 || r[3]==1) || (l[4]==1 || s[1]==1 || r[2]==1))){
    flag = true;
    //cout<<"YES"<<endl;
    //return 0;
  }
  if(p[4]==1 && ((l[4]==1 || s[4]==1 || r[4]==1) || (l[1]==1 || s[2]==1 || r[3]==1))){
    flag = true;
    //cout<<"YES"<<endl;
    //return 0;
  }
  if(flag == true) {
    cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;
}