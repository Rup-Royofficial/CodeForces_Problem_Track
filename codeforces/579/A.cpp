#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    long long int counter(0),num;
    cin>>num;
    string str;
    while(num>0) {
        if(num&1) counter++;
        num>>=1;
    }

    cout<<counter<<endl;
    */

   //logu will store the log of the number
    int num,logu,counter(0);
    cin>>num;
    logu = (int) log2(num);//converting the number to log2
    string bin = bitset<64>(num).to_string().substr(64-logu-1);//binary representation/conversion of the input number
    for(int i = 0; i < bin.length(); i++){
        if(bin[i] == '1')   counter++;
    }
    cout<<counter<<endl;
}