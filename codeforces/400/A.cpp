#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int counter(0);
        string str;
        cin>>str;
        vector<string> vec;
        for(int i = 0; i<12; i++){
            if(str[i]=='X'){
                vec.push_back("1x12");
                break;
            }
        }
        for(int i = 0; i<6; i++){
            if(str[i]=='X' && str[i+6]=='X'){
                vec.push_back("2x6");
                break;
            }
        }
        for(int i = 0; i<4; i++){
            if(str[i]=='X' && str[i+4]=='X' && str[i+4+4]=='X'){
                vec.push_back("3x4");
                break;
            }
        }

        for(int i = 0; i<3; i++){
            if(str[i]=='X' && str[i+3]=='X' && str[i+3+3]=='X' && str[i+3+3+3]=='X'){
                vec.push_back("4x3");
                break;
            }
        }

        for(int i = 0; i<2; i++){
            if(str[i]=='X' && str[i+2]=='X' && str[i+2+2]=='X' && str[i+2+2+2]=='X' && str[i+2+2+2+2]=='X' && str[i+2+2+2+2+2]=='X'){
                vec.push_back("6x2");
                break;
            }
        }

        for(int i = 0; i<12; i++){
            if(str[i]=='X') counter++;
        }

        if(counter==12){
            vec.push_back("12x1");
        }

        cout<<vec.size()<<" ";
        for(int i = 0; i<vec.size(); i++)
            cout<<vec[i]<<" ";

        cout<<endl;
    }
}