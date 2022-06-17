#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin>>s;
    string input;
    cin>>input;
    transform(input.begin(),input.end(),input.begin(), ::tolower);
    char a = 'a';
    int count = 0;
    sort(input.begin(),input.end());
    if(s<26) {
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        for(int i = 0; i<s; i++){
            if((int)input[i]==(int)a){
                a++;
            }

        }
    }
    if((int)a==123)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;    
}