/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int size,j(0);
    string str;
    cin>>size>>str;
    vector<char> vec(size);
    for(long long int i=0; i<size; i++){
        vec[i]=str[i];
    }
    
    //if(count(vec.begin(), vec.end(),'0')>0){
    //    vec.erase(remove(vec.begin(), vec.end(), '0'),vec.end());
    //}
    //int size2 = vec.size();
    //cout<<size-2*(size-size2)<<endl;
    

    while(count(vec.begin(), vec.end(), '0')!=0 && count(vec.begin(), vec.end(), '1')!=0 ){
        if(vec.size()==0){
            cout<<0<<endl;
            return 0;
        }
        
        else if((vec[j]=='1' && vec[j+1]=='0') || (vec[j]=='0' && vec[j+1]=='1')){
            vec.erase(find(vec.begin(),vec.end(),'0'));
            vec.erase(find(vec.begin(),vec.end(),'1'));
            j=0;
        }
        
        else{
            j++;
        }
    }
    cout<<vec.size();

}
*/

    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int size,counter0(0),counter1(0);
        cin>>size;
        string input;
        cin>>input;
        for(int i = 0; i<input.length(); i++){
            if(input[i]=='0'){
                counter0++;
            }
            else if(input[i]=='1'){
                counter1++;
            }
            else continue;
        }
        counter0 = min(counter0,counter1);
        counter1 = min(counter0,counter1);
        int total = counter1+counter0;
        if(total%2==0) cout<<size-total<<endl;
        else cout<<size-(total-1)<<endl;
    }