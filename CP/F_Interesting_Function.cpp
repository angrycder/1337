#include <iostream>

using namespace std;

void solve () {
  int L, R;
  cin >> L >> R;

  int ans = 0;
  while (L != 0 || R != 0) {
    ans += R - L;
    L /= 10;
    R /= 10;
  }
  cout << ans << '\n';
}

int main () {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int testc;
  cin >> testc;

  for (int i = 0; i < testc; i++) {
    solve();
  }
}