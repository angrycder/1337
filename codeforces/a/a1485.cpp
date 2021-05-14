#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	long long int a,b,ans =1e18,c;
    	cin>>a>>b;
    	for(long long int i = 0;i*i<=a;i++){
    		if(b==1 && i==0){
    			continue;
    		}
    		c=i;
    		long long int k =a;
    		while(k){
    			k /= (b+i);
    			c++;
    		}
    		ans = min(ans,c);
    	}
    	cout<<ans<<endl;
    }
	return 0;
}

//g++ a1485.cpp -o run//
//https://codeforces.com/problemset/problem/1485/A//