#include<bits/stdc++.h>
using namespace std;

int main(){
    int counter(0);
    string inpt,temp;
    getline(cin,inpt);

    int length = inpt.size();
    for(int i = 0; i < length; i++){
        if(inpt[i] >='a' && inpt[i] <='z'){
            temp+=inpt[i];
            counter=0;
        }
        else if(inpt[i]==' ' && counter==0){
            temp+=inpt[i];
            counter=1;
        }
        else if(inpt[i]=='.' || inpt[i]=='!' || inpt[i]=='?' || inpt[i]==',' || inpt[i]=='.' || inpt[i]==':' || inpt[i]==';'){
            if(counter==1){
                temp.pop_back();
            }
            temp.push_back(inpt[i]);
            temp.push_back(' ');
            counter=1;
        }   
    }

    cout<<temp;
}