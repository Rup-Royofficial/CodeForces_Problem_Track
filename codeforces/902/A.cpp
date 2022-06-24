#include<bits/stdc++.h>
using namespace std;


int main(){
    int testcase,max_limit,maxi_checker(0);
    cin>>testcase>>max_limit;

    while(testcase--){

        int minimum_limit,maximium_limit;
        cin>>minimum_limit>>maximium_limit;

        if(maxi_checker>=minimum_limit){
            maxi_checker = max(maxi_checker,maximium_limit);
        }
    }

    if(maxi_checker==max_limit){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}