#include<bits/stdc++.h>
using namespace std;
const int nax = 1005;
int t[nax];
int main() {
	int n, a;
	scanf("%d%d", &n, &a);
	for(int i = 1; i <= n; ++i)
		scanf("%d", &t[i]);
	int answer = 0;
	for(int i = 1; i <= n; ++i) if(t[i]) {
		// can we catch criminal in city i?
		int distance = i - a; // distance from a
		int j = a - distance; // the other city at the same distance
		if(j < 1 || j > n || t[i] == t[j])
			++answer;
	}
	printf("%d\n", answer);
	return 0;
}