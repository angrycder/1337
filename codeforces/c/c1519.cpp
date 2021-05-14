#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}

ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}

void solve(){
    int n;
    cin>>n;
    map<int,vector<ll>>mp;
    vector<int>u(n),s(n);
    for(int i=0;i<n;i++){
        cin>>u[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        mp[u[i]-1].push_back(s[i]);
    }
    vector<vector<ll>>az;
    for(auto i : mp){
        az.push_back(i.second);
        sort(az.back().begin(),az.back().end());
    }
    vector<ll>ans(n,0);
    vector<vector<ll>>z;
    for(auto i : az){
        vector<ll>other;
        for(int j=0;j<(int)i.size();j++){
            if(j==0) other.push_back(i[j]);
            else other.push_back(other.back() + i[j]);
        }
        z.push_back(other);
    }
    for(auto i : z){
        for(int j=1;j<=(int)i.size();j++){
            int left=(int)i.size() % j;
            ll del=0;
            if(left>0) del=i[left-1];
            ans[j-1]+=(i.back() - del);
        }
    }
    for(auto i : ans) cout<<i<<" ";
    cout<<"\n";
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){ 
                solve();
    }
    return 0;
}

//g++ c1519.cpp -o run
//https://codeforces.com/problemset/problem/1519/C