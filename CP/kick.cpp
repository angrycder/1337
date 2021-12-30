#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n,b;
        cin>>n>>b;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long ret=0,tmp=0;
        for(int i=0;i<n;i++){
            if(ret+v[i]<=b){
                ret+=v[i];
                tmp++;
            }
            else{
                break;
            }
        }
        cout<<"Case #"<< k <<": "<<tmp<<endl;
    }
}