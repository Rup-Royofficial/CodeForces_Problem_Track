#include <bits/stdc++.h>
#define bye_mate return 0
#define nl '\n'
#define gl getline //(cin>>ws,s);
#define ll long long
#define st(n) fixed << setprecision(n)
#define ys cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define fl(i, a, n) for(int i = a; i < n; i++)
#define fll(i, n, a) for(int i = n; i >= 0; i--)
#define pb push_back
#define ff first
#define ss second


using namespace std;


int main()
{
 
 int t;cin>>t;
 while(t--) 
 {
        
        string ss[8];
        fl(i,0,8)
        {
         string s; cin>>s;
         ss[i] = s;
        }
        char a[8][8];
        fl(i,0,8)
        {
         fl(j,0,8)
         {
          a[i][j] = ss[i][j];
         }
        }
        bool c = 0, d = 0;
        int x, y;
        fl(i,1,7)
        {
         fl(j,1,7)
         {
          if(a[i][j] =='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#')c=1;
          if(a[i][j] =='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#')d=1;
          if(c && d)
          {
           x = i+1;
           y = j+1;
           goto ans;
          }

         }
        }
        ans:
        cout<<x<<" "<<y<<nl;
 }

}