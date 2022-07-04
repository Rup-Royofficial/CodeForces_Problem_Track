//░░░░░░░░░░▄
//░░░░░░░░▄▐░▄▄█████▄▄
//░░░░░░▄█████████████▄▀▄▄░▄▄▄
//░░░░░█████████████████▄██████
//░░░░████▐█████▌████████▌█████▌
//░░░████▌█████▌█░████████▐▀██▀
//░▄█████░█████▌░█░▀██████▌█▄▄▀▄
//░▌███▌█░▐███▌▌░░▄▄░▌█▌███▐███░▀
//▐░▐██░░▄▄▐▀█░░░▐▄█▀▌█▐███▐█
//░░███░▌▄█▌░░▀░░▀██░░▀██████▌
//░░░▀█▌▀██▀░▄░░░░░░░░░███▐███
//░░░░██▌░░░░░░░░░░░░░▐███████▌
//░░░░███░░░░░▀█▀░░░░░▐██▐███▀▌
//░░░░▌█▌█▄░░░░░░░░░▄▄████▀░▀
//░░░░░░█▀██▄▄▄░▄▄▀▀▒█▀█░▀
//░░░░░░░░░▀░▀█▀▌▒▒▒░▐▄▄
//░░░░░░░░▄▄▀▀▄░░░░░░▄▀░▀▀▄▄
//░░░░░░▄▀░▄▀▄░▌░░░▄▀░░░░░░▄▀▀▄
//░░░░░▐▒▄▀▄▀░▌▀▄▄▀░░░░░░▄▀▒▒▒▐
//░░░░▐▒▒▌▀▄░░░░░▌░░░░▄▄▀▒▐▒▒▒▒▌
//░░░▐▒▒▐░▌░▀▄░░▄▀▀▄▀▀▒▌▒▐▒▒▒▒▐▐
//░░░▌▄▀░░░▄▀░█▀▒▒▒▒▀▄▒▌▐▒▒▒▒▒▌▌
//░░▄▀▒▐░▄▀░░░▌▒▐▒▐▒▒▒▌▀▒▒▒▒▒▐▒▌

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,counter(0);
    cin>>x>>y;
    bool flag = false;
    while(true){
        if(!flag){
            if(x>=2 && y>=2) {
                x-=2;
                y-=2;
                //counter++;
            }
            else if(x>=1 && y>=12){
                x-=1;
                y-=12;
                //counter++;
            }
            
            else if (y>=22){
                //x-=1;
                y-=22;
                //counter++;
            }
            else {
                cout<<"Hanako";
                return 0;
            }
        }
        else{
            if (y>=22){
                //x-=1;
                y-=22;
                //counter++;
            }
            else if(x>=1 && y>=12){
                x-=1;
                y-=12;
                //counter++;
            }
            else if(x>=2 && y>=2) {
                x-=2;
                y-=2;
                //counter++;
            }
            
            else {
                cout<<"Ciel";
                return 0;
            }    
            
        }    
        flag=!flag;
    }
    
}

/*--------------------------------------------------------------------------------------------------------------------------*/
 
//You have struggled your way here with no guidance from anyone,keep the faith
//You have practiced a lot,have faith in yourself
//You have practiced a hell lot of questions,have faith in yourself
//If nothing strikes for a period of time,calm down,drink water and think again from the start
//Dont just stare at the problem use that damn pen and paper,write down whats in ur head
 
//AFTER THE WAR AND STRUGGLE,PEACE RESIDES,WORK HARD TODAY FOR THE BETTER TOMORROW