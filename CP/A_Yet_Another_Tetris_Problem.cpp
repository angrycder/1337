#include <iostream>
#include <vector>
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
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           ci(v[i]);
       }
       if (n==1)
       {
           cy;return;
       }
       else{
           int tmp = v[0];
           for (int i = 1; i < n; i++)
           {
               if (abs(v[i]-v[i-1])%2)
               {
                   cn;return;
               }
               else{
                   continue;
               }
           }   
       }
       cy;return;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();   
    }
    return 0;
}