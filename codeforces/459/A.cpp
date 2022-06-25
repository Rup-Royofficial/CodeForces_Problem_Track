#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int diffx = abs(x1 - x2);
    int diffy = abs(y1 - y2);

    if(x1!=x2 && y1!=y2 && diffx!=diffy){
        cout<<-1<<endl;
    }    
    else if(x1==x2 && y1!=y2){
        cout<<x1+diffy<<" "<<y1<<" "<<x2+diffy<<" "<<y2<<endl;
    }
    else if(x1!=x2 && y1==y2){
        cout<<x1<<" "<<y1+diffx<<" "<<x2<<" "<<y2+diffx<<endl;
    }
    else{
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }

    

}