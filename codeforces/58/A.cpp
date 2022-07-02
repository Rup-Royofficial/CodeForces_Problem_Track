#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,str;
    cin>>s;
    int counter(0);
    for(int i=0;i<s.length();i++){
        if(s[i]=='h' && counter==0) {
            str+=s[i];
            counter++;
        }
        else if(s[i]=='e' && counter==1){
            str+=s[i];
            counter++;
        }
        else if(s[i]=='l' && (counter==2 || counter==3)){
            str+=s[i];
            counter++;
        }
       // else if(s[i]=='l' && counter==3){}
        else if(s[i]=='o' && counter==4){
            str+=s[i];
            counter++;
            
        }

        if(str=="hello") break;
    }

    if(str=="hello" && counter==5) cout<<"YES";
    else cout<<"NO";
}