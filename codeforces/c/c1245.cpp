#include <bits/stdc++.h> 
using namespace std;

typedef long long  ll;
const int MOD = 1000000007;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin>>s;
    for(char x: s){
    		if (x == 'w' || x == 'm'){
                    cout << 0 << endl;
                    return 0;
        }
    }
    int n = s.size();
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        dp[i] = dp[i - 1];
        if (s[i - 1] == s[i - 2] && (s[i - 1] == 'u' || s[i - 1] == 'n')){
            dp[i] = (dp[i] + dp[i - 2]) % MOD;
        }
    }
    
    cout << dp[n] <<endl;
    
	return 0;
}

//g++ c1245.cpp -o run
//https://codeforces.com/problemset/problem/1245/C