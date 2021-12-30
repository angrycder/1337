#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include<iomanip>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES"<<endl
#define cn             cout<<"NO"<<endl
#define nl             cout<<endl
#define minus          cout<<"-1"<<endl;
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0,zero=0;
    int diff=0;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            if(s[i]=='0') s[i]='1';
            else s[n-i-1]='1';
            diff++;
        }
    }
    for(auto i : s) if(i=='0') zero++;
    else one++;
    if(diff==0){
        if(zero==0) cout<<"DRAW"<<"\n";
        else if(zero==1 || zero%2==0) cout<<"BOB"<<"\n";
        else cout<<"ALICE"<<"\n";
    }
    else{
        if(diff==1 && zero==1) cout<<"DRAW"<<"\n";
        else cout<<"ALICE"<<"\n";
    }
} 
int main()
{
    fast;
    int t;
    cin>>t;
    cout<<fixed<<setprecision(0);
    while(t--){
       solve();
    }
    return 0;
}