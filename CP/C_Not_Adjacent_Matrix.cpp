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
#define ll long long
using namespace std;

const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}

ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}

ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}


void solve(){
    int n;
    cin>>n;
    if(n==2){
        cout<<-1<<"\n";
        return;
    }
    int a[n][n];
    if(n%2==1){
        int k=1;
        int x=0;
        while(k<=(n*n)){
            int i=x/n;
            i=i%n;
            int j=x%n; 
            a[i][j]=k;
            k++;
            x+=2;
        }
    }
    else{
        int k=1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j+=2) a[i][j]=k++;
            }
            else{
                for(int j=1;j<n;j+=2) a[i][j]=k++;
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==1){
                for(int j=0;j<n;j+=2) a[i][j]=k++;
            }
            else{
                for(int j=1;j<n;j+=2) a[i][j]=k++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            //cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}
