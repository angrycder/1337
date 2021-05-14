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
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>a(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0) continue;
            if(i==0) a[i][j]=a[i][j-1]+1;
            else if(j==0) a[i][j]=a[i-1][j]+1;
            else a[i][j]=a[i-1][j]+(j+1);
        }
    }
    if(a[n-1][m-1]==k) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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

//g++ b1519.cpp -o run
//https://codeforces.com/problemset/problem/1519/B