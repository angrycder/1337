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
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
       int  n;ci(n);
       if(n==1||n==2||n==4){
           minus;
       }
       else{
           int j = n%7;
           switch (j)
           {
            case 1:
               cout<<1<<" "<<1<<" "<<n/7 - 1 <<endl;
               break;
            case 2:
               cout<<3<<" "<<0<<" "<<n/7 - 1 <<endl;
               break;
            case 3:
               cout<<1<<" "<<0<<" "<<n/7<<endl;
               break;
            case 4:
               cout<<2<<" "<<1<<" "<<n/7 - 1 <<endl;
               break;
            case 5:
               cout<<0<<" "<<1<<" "<<n/7<<endl;
               break;
            case 6:
               cout<<2<<" "<<0<<" "<<n/7<<endl;
               break;
            default:
               cout<<0<<" "<<0<<" "<<n/7<<endl;
               break;
           }
       }
    }
    return 0;
}