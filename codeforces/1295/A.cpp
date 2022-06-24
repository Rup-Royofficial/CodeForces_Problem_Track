#include<bits/stdc++.h>
using namespace std;



int main(){
    int testcase;
    cin>>testcase;

    while(testcase--){
        int n;//n khana segs use kore max koto number create kora jabe,
              // n niyechi , setar amra 1(2 segs) and 7(3 segs) digit ta diye dekbo
        string ans;
        cin>>n;

        if(n%2==0){// jodi n even hoy,then 1 print kortei thakbbo until n==0, 
            while(n>0){
                ans+='1';// '1' print korchi manei 2 segs use hoche, 
                n-=2;//tai total given segs theke 2 kore deduct hoche
            }
        }
        else{
            ans+='7';//jodi n odd hoy,then, initially 7 add kore debo and total segs theke 3 subtract korbo(7 er segs =3)
            for(int i = 0; i<n-3; i+=2){// er por dekh jemni total(odd) theke 3(odd) minus korlam, even holo and then
                ans+='1';// abr 1 print kora shuru holo , and n ke 2 kore deduct kora hoche
            }
        }
        cout<<ans<<endl;
    }
}