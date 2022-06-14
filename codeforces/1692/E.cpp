// Problem: E. Binary Deque
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;


int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;
        vector<ll> vec(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        ll i = 0, j = 0;
        ll current = 0;
        ll maxi_num = INT_MIN;
        while (j < n)
        {
            current += vec[j];
            
            if (current < s)
                j++;
            if (current == s)
            {
                maxi_num = max(maxi_num, j - i + 1);
                j++;
            }
            if (current > s)
            {
                
                current = current - vec[i];
                current = current - vec[j];
                i++;
            }
        }
        if (maxi_num == INT_MIN)
            cout << -1 << endl;
        else
            cout << n - maxi_num << endl;
    }
 
    return 0;
}