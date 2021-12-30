#include <bits/stdc++.h>

using namespace std;

const int N = 21;

long long f[N];

int main() {
	int n;
	cin >> n;
	f[0] = 1;
	for (int i = 1; i < N; ++i) {
		f[i] = f[i - 1] * i;
	}
	
	long long ans = (2*f[n-1])/n ;
	
	cout << ans << endl;
	
	return 0;
}