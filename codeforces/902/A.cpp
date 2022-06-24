#include<bits/stdc++.h>
using namespace std;


int main(){
    int testcase,max_limit,maxi_checker(0);
    cin>>testcase>>max_limit;

    while(testcase--){

        int minimum_limit,maximium_limit;
        cin>>minimum_limit>>maximium_limit;

        if(maxi_checker>=minimum_limit){ //Lower limit of current case should be less than equal to the upper limit of the prev max limit
            maxi_checker = max(maxi_checker,maximium_limit);//update the counter
        }
    }

    if(maxi_checker==max_limit){//if the max limit given is not less than or greater than the given final limit at the first, then..
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}