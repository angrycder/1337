#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, w;
        int box_width;
        cin >> n >> box_width;

        multiset<int> st;
        for (int i = 0; i < n; i++) {
            cin >> w;
            st.insert(w);
        }

        int height = 1, space_left = box_width;

        while (!st.empty()) {
            auto it = st.upper_bound(space_left);
            if (it != st.begin()) {
                it--;
                int val = *it;
                space_left -= val;
                st.erase(it);
            } else {
                space_left = box_width;
                height++;
            }
        }

        cout << height << endl;
    }
    return 0;

}
//g++ b1498.cpp -o run
//https://codeforces.com/problemset/problem/1498/B