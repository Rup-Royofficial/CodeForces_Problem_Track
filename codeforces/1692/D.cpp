#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string solve(ll tc)
{
    string s;
    cin >> s;
    ll x;
    cin >> x;
    ll a = x / 60, b = x % 60;
    ll c = 10 * (s[0] - '0') + (s[1] - '0'), d = 10 * (s[3] - '0') + (s[4] - '0');
    string p = "";
    p += s[0];
    p += s[1];
    p += s[3];
    p += s[4];
    ll ans = 0;
    if (p[0] == p[3] && p[1] == p[2])
        ans += 1;
    string q = p;
    while (1)
    {
        c += a;
        d += b;
        c += d / 60;
        d %= 60;
        c %= 24;
        p = "";
        if (c / 10 == 0)
            p += '0';
        p += to_string(c);
        if (d / 10 == 0)
            p += '0';
        p += to_string(d);
        if (p == q)
        {
            break;
        }
        if (p[0] == p[3] && p[1] == p[2])
            ans += 1;
    }
    cout << ans << endl;
    return "";
}

int main(){
	long long int testcase;
	cin>>testcase;
	while(testcase--){
		solve(testcase);
	}
}