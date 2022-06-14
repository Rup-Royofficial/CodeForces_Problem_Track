// Problem: F. 3SUM
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define int long long
using namespace std;

//Hope
int n,t;
vector<int> tmp;


void solve() {
    cin >> n;
    int cnt[10]={};
    tmp.clear();
    for(int i=1;i<=n;++i) {
        cin >> t;
        if(cnt[t%10]<5) {
            cnt[t%10]++;
            tmp.push_back(t);
        }
    }
    for(int i=0;i<tmp.size();++i)
    for(int j=i+1;j<tmp.size();++j)
    for(int k=j+1;k<tmp.size();++k)
    if((tmp[i]+tmp[j]+tmp[k])%10==3) {
        puts("YES");
        return;
    }
    puts("NO");
    return;
}


signed main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}