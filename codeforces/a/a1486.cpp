#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	long long int k,tmp=0;
    	cin>>n;
    	bool ret=true;
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>k;
    		if(k>=i){
    			tmp += k-i;
    		}
    		else{
    			if(i-k > tmp){
    				ret = false;
    			}
    			else{
    				tmp-= i-k;
    			}
    		}
    	}
    	if(ret){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
	return 0;
}
//g++ a1486.cpp -o run//
//https://codeforces.com/problemset/problem/1486/A//