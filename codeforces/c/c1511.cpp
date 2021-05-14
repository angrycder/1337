#include <bits/stdc++.h> 
using namespace std;

typedef long long  ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n,q;
    cin>>n>>q;
    vector<int> v(n,0);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    int tmp;
    for (int i = 0; i < q; ++i)
    {
    	cin>>tmp;
    	int it = find(v.begin(),v.end(),tmp) - v.begin();
    	cout<<it + 1<<" ";
    	rotate(v.begin(), v.begin() + it, v.begin() + it + 1);
    }
	return 0;
}

//g++ c1511.cpp -o run
//https://codeforces.com/problemset/problem/1511/C