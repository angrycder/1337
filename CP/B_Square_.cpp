#include <iostream>
#include <math.h>
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

bool isPerfectSquare(int x)
{
    if (x >= 0) {
 
        int sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
    int a,b;
    int x,y;
    cin>>a>>b>>x>>y;
    if (isPerfectSquare(a*b + x*y))
    {
     cy;   
    }
    else{
        cn;
    }
    
    }
    return 0;
}