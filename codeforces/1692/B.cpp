#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		  int n;	
		  cin >> n; 
		  long long int a = n; 
		  vector<long long int>v; 
		  set<long long int>s; 
		  map<long long int, long long int>m; 
		  for (long long int i = 0; i < n; i++) { 
		    long long int x; 
		    cin >> x; 
		    v.push_back(x); 
		    s.insert(x); 
		    m[x] += 1; 
		  } 
		  v.assign(s.begin(), s.end()); 
		  for (long long int i = 0; i < v.size(); i++) { 
		    n -= (m[v[i]] - 1); 
		  } 
		  if ((a - n) % 2 == 1) 
		    n -= 1; 
		  cout << n<<endl;
	}  
} 