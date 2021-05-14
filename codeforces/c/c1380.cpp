#include <bits/stdc++.h> 
using namespace std;

typedef long long  ll;
typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n;
    lli x;
    cin>>n>>x;
    vector<lli> v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    int l = 1,ret=0;
    for (int i = 0; i < n; ++i)
    {
    	if(v[i]*l>=x){
    		++ret;
    		l=1;
    	}
    	else{
    		++l;
    	}
    }
    cout<<ret<<endl;
    }
	return 0;
}

//g++ c1380.cpp -o run
//https://codeforces.com/problemset/problem/1380/C