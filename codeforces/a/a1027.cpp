#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ret=true;
    for (int i = 0; i < n/2; ++i)
    {
 	if((s[i]==s[n-i-1])||(abs((int)s[i]-(int)s[n-i-1])==2)){
    		continue;
    	}
    	else{
    		ret = false;
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

//g++ a1027.cpp -o run//
//https://codeforces.com/problemset/problem/1027/A//