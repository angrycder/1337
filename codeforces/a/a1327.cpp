#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    long long int n,k;
    cin>>n>>k;
    if((k * k <= n) && (n%2 == k%2 )){
    	cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;	
    }   
    }
	return 0;
}

//g++ a1327.cpp -o run//
//https://codeforces.com/problemset/problem/1327/A//