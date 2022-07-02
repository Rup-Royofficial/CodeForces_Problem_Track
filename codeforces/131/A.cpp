#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,cancelFirst,ucancelFirst,lcancelFirst,output="";
    cin>>str;

    cancelFirst = str.substr(1);
    ucancelFirst = cancelFirst;
    lcancelFirst = cancelFirst;
    
    transform(ucancelFirst.begin(), ucancelFirst.end(),ucancelFirst.begin(), ::toupper);
    transform(lcancelFirst.begin(), lcancelFirst.end(),lcancelFirst.begin(), ::tolower);
    //cout<<cancelFirst;
    
    if(str[0]==toupper(str[0]) && cancelFirst==lcancelFirst && cancelFirst!=ucancelFirst){
        output+=str;
    }
    else if(str[0]==toupper(str[0]) && cancelFirst!=lcancelFirst && cancelFirst==ucancelFirst){
        output+=tolower(str[0]);
        output+=lcancelFirst;
    }
    else if(str.length()==1 && str[0]==tolower(str[0])){
        output+=toupper(str[0]);
    }
    else if(str.length()==1 && str[0]==toupper(str[0])){
        output+=tolower(str[0]);
    }
    else if(str[0]==tolower(str[0]) && cancelFirst!=lcancelFirst && cancelFirst==ucancelFirst){
        output+=toupper(str[0]);
        output+=lcancelFirst;
    }
    else {
        output+=str;
    }

    cout<<output;

}