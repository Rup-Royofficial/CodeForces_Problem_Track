#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(c==0){
        if(a==b) cout<<"YES";
        else cout<<"NO";
    }
    else{
        if((b-a)%c==0 && (b-a)/c>=0) cout<<"YES";
        else cout<<"NO";
    }
}

/*
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b<0 && a>0 && c>0){
        cout<<"NO"<<endl;
        return 0;
    }
    else if(b<0 && b<a && c>0){
        cout<<"NO"<<endl;
        return 0;
    }
    else if(b<0 && a>0 && c<0){
        while(a!=b && a>b){
            if(a==b) {
                cout<<"YES"<<endl;
                return 0;
            }
            a+=c;
        }
        if(a==b)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if (a>0 && b>=0 && c<0){
        while(a!=b && a>b){
            if(a==b) {
                cout<<"YES"<<endl;
                return 0;
            }
            a+=c;
        }
        if(a==b)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(a<=0 && b<=0 && c<0){
        while(a!=b && a>b){
            if(a==b){
                cout<<"YES"<<endl;
                return 0;
            }
            a+=c;
        }
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        while(a!=b && a<b && c!=0){
            if(a==b) {
                cout<<"YES"<<endl;
                return 0;
            }
            a+=c;
        }
        if(a==b)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;    
    }
}

*/