// Problem: A. Brain's Photos
// Contest: Codeforces - Codeforces Round #368 (Div. 2)
// URL: https://codeforces.com/contest/707/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int matrixSize,innerMatrixSize;
	cin>>matrixSize>>innerMatrixSize;
	for(int i = 0; i<matrixSize; i++){
		char colour;
		for(int j = 0; j<innerMatrixSize; j++){
			cin>>colour;
			if(colour=='M' || colour=='C' || colour=='Y'){
				cout<<"#"<<"Color"<<endl;
				return 0;
			}
		}
	}
	cout<<"#"<<"Black&White"<<endl;
	
}