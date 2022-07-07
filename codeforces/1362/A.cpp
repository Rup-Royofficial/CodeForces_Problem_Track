#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        long long int a,b,counter(0);
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else {
            if(a<b){
                long long int temp = a;
                a = b;
                b = temp;
            }
            counter = 0;
            while(a>b){
                if(a/8>=b && a%8==0){
                    counter++;
                    a/=8;
                }
                else if(a/4>=b && a%4==0){
                    counter++;
                    a/=4;
                }
                else if(a/2>=b && a%2==0){
                    counter++;
                    a/=2;
                }
                else break;
            }
            if(a==b) cout<<counter<<endl;
            else cout<<-1<<endl;
        }    
    }
}