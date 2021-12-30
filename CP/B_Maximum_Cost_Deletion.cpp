#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
int f(string S)
{
    string new_str;
 
    int N = S.length();
 
    int i = 0;
 
    while (i < N) {
 
        new_str += S[i];
 
        int j = i;
        while (i < N && S[i] == S[j])
            ++i;
    }
 
    return ceil((new_str.size() + 1) / 2.0);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, a, b;
        cin>>n>>a>>b;
        string s;
        cin>>s;

        ll ans = a*n;
        if(b>=0){
            cout<<ans+(b*n)<<"\n";
            continue;
        }
        ans += b*f(s);
        cout<<ans<<"\n";
    }
}