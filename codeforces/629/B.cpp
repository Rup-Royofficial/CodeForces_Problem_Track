#include<bits/stdc++.h>
using namespace std;
int male[367],female[367];


int main(){
    int testcase,lower_limit(0),upper_limit(0);
    char gender;
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        cin>>gender>>lower_limit>>upper_limit;
        if(gender=='M'){
            for(int j = lower_limit; j <=upper_limit; j++){
                male[j]++;
            }
        }
        else{
            for(int j = lower_limit; j<=upper_limit; j++){
                female[j]++;
            }
        }
    }

    int maxi(0);
    for(int i = 0; i <=366; i++){
        maxi = max(maxi,min(male[i],female[i]));
    }

    cout<<2*maxi;
}