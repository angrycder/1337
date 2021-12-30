#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mod=1000000007;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

map<int,vector<int>>mp;
void solve(){
    mp.clear();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
      int x;
      cin>>x;
      mp[x].push_back(i);
    }
    int ans=0;
    for(auto x:mp){
      //vector of indices of x.first
      int sz=x.second.size();
        int pre[sz];
        //pre[i] will store sum of (right+1) from indices x.second[i] to x.second[sz-1]
        pre[sz-1]=n-x.second.back()+1;
        for(int i=sz-2;i>=0;i--){
          pre[i]=pre[i+1]+(n-x.second[i]+1);
        }

        for(int i=0;i<sz-1;i++){
          ans=ans+(x.second[i])*(pre[i+1]);
        }

    }
    
    cout<<ans;
    cout<<endl;
}
int32_t main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      // srand(time(0));
      // prime(20000);
      int t;
      cin>>t;
        // t=1;
      while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
      }
      return 0;
}