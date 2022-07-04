#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,ta,b,tb,ans(0);
    int h,m;
    cin>>a>>ta>>b>>tb;
    scanf("%d:%d",&h,&m);

    int x1 = 60*h+m;
    int y1 = x1+ta;
    for(int x2 = 5*60; x2<24*60; x2+=b){
        int y2 = x2+tb;
        int x = max(x1,x2);
        int y = min(y1,y2);
        if(x<y) ans++;
    }

    cout<<ans<<endl;


    

}