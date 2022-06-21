#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,k;
    string str;
    cin>>s>>k>>str;

    //'a' is 97 && 'z' is 123
    //for(char i = 'a'; i <= 'z'; i++)
    for(int i = 97; i<=123; i++){
        for(int j = 0; j<s; j++){
            if(str[j]==(char)i){
                str[j]='0';//Now here we are replacing that char with 0, (in next comment)
                k--;
            }
            if(k==0) break;
        }
        if(k==0) break;
    }

    for(int i = 0; i<s-k; i++){
        if(str[i]>='a' && str[i]<='z')//before we added the replacement as 0, but 0 is not between a & z so the replacement won't get printed
            cout<<str[i];
    }
}
/*
int main(){
    int size,k;
    string str;
    cin>>size>>k;
    cin>>str;

    unordered_map<char, int> hash;

    for(int i = 0; i<size; i++){
        hash[str[i]]++;
    }


    int counter = 0;
    while(k!=0 && counter <=size){
        if(str[counter]=='a'){
            hash['a']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }
        counter++;
    }
    counter=0;
    while(k!=0 && counter <=size){     
        if(str[counter]=='b' && hash['a']==0){
            hash['b']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='c' && hash['b']==0 && hash['a']==0){
            hash['c']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='d' && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['d']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='e' && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['e']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='f' && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['f']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='g' && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['g']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='h' && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['h']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }


    while(k!=0 && counter <=size){     
        if(str[counter]=='i' && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['i']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }


    while(k!=0 && counter <=size){     
        if(str[counter]=='j' &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['j']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='k' &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['k']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='l' &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['l']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='m' &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['m']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='n' &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['n']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='o' &&hash['n']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['o']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='p' &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['p']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='q' &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['q']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='r' &&hash['q']==0 &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['r']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='s' &&hash['r']==0 &&hash['q']==0 &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['s']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='t' &&hash['s']==0 &&hash['r']==0 &&hash['q']==0 &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['t']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='u' &&hash['t']<=0 &&hash['s']<=0 &&hash['r']<=0 &&hash['q']<=0 &&hash['p']<=0 &&hash['o']<=0 &&hash['n']<=0 &&hash['m']<=0 &&hash['l']<=0 &&hash['k']<=0 &&hash['j']<=0 &&hash['i']<=0 && hash['h']<=0 && hash['g']<=0 && hash['f']<=0 && hash['e']<=0 && hash['d']<=0 && hash['c']<=0 && hash['b']<=0 && hash['a']<=0){
            hash['u']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='v' &&hash['u']==0 &&hash['t']==0 &&hash['s']==0 &&hash['r']==0 &&hash['q']==0 &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['v']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='w' &&hash['v']==0 &&hash['u']==0 &&hash['t']==0 &&hash['s']==0 &&hash['r']==0 &&hash['q']==0 &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['w']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='x' &&hash['w']==0 &&hash['v']==0 &&hash['u']==0 &&hash['t']==0 &&hash['s']==0 &&hash['r']==0 &&hash['q']==0 &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['x']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='y' &&hash['x']==0 &&hash['w']==0 &&hash['v']==0 &&hash['u']==0 &&hash['t']==0 &&hash['s']==0 &&hash['r']==0 &&hash['q']==0 &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['y']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    while(k!=0 && counter <=size){     
        if(str[counter]=='z' &&hash['y']==0 &&hash['x']==0 &&hash['w']==0 &&hash['v']==0 &&hash['u']==0 &&hash['t']==0 &&hash['s']==0 &&hash['r']==0 &&hash['q']==0 &&hash['p']==0 &&hash['o']==0 &&hash['n']==0 &&hash['m']==0 &&hash['l']==0 &&hash['k']==0 &&hash['j']==0 &&hash['i']==0 && hash['h']==0 && hash['g']==0 && hash['f']==0 && hash['e']==0 && hash['d']==0 && hash['c']==0 && hash['b']==0 && hash['a']==0){
            hash['z']--;
            str.erase(str.begin()+counter);
            k--;
            size--;
            continue;
        }

        counter++;
    }

    cout<<str;
}
*/