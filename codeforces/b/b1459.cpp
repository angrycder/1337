#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &i : a) cin>>i;
    vector<int>b(n),c(n);
    int ok=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            b[i]=b[i-1]+1;
            ok=max(ok,b[i]);
        }
    }
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]){
            c[i]=c[i+1]+1;
            ok=max(ok,c[i]);
        }
    }
    int max_peak=0;
    for(int i=0;i<n;i++){
        if(b[i]==ok) max_peak++;
        if(c[i]==ok) max_peak++; 
    }
    if(max_peak>2){
        cout<<0;
        return;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(b[i]==ok && c[i]==ok && ok%2==0){
            ans++;
        }
    }
    cout<<ans;
}
                
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);   
            solve();
    return 0;
}


//g++ b1459.cpp -o run
//https://codeforces.com/problemset/problem/1459/B