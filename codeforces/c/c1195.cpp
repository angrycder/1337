#include <bits/stdc++.h> 
using namespace std;

typedef long long  ll;
typedef long long int lli;
typedef pair<lli, lli> plli;

#define ff first
#define ss second

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;
    lli tmp;
    vector<vector<lli>> v = {{},{}};
    for (int i = 0; i < n; ++i)
    {
    	cin>>tmp;
    	v[0].push_back(tmp);
    }
    for (int i = 0; i < n; ++i)
    {
    	cin>>tmp;
    	v[1].push_back(tmp);
    }
    plli d = {0,0};
    for (int i = 0; i < n; ++i)
    {
    d= {max(d.ff, d.ss + v[0][i]), max(d.ss, d.ff + v[1][i])};
    }
    cout << max(d.ff, d.ss) << "\n";
	return 0;
}

//g++ c1195.cpp -o run
//https://codeforces.com/problemset/problem/1195/C