#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

string p, h;

bool read(){
	if (!(cin >> p >> h))
		return false;
	return true;
}

void solve(){
	int n = h.size();
	vector<int> cntp(26);
	forn(i, p.size())
		++cntp[p[i] - 'a'];
	forn(i, n){
		vector<int> cnth(26);
		for (int j = i; j < n; ++j){
			++cnth[h[j] - 'a'];
			if (cntp == cnth){
				puts("YES");
				return;
			}
		}
	}
	puts("NO");
}

int main() {
	int tc;
	scanf("%d", &tc);
	forn(_, tc){
		read();
		solve();
	}
	return 0;
}