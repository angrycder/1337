#include <bits/stdc++.h> 
using namespace std;

long long int sumd(long long int x){
	long long int s=0;
		while (x != 0) {
			s = s + x % 10;
			x = x / 10;
		}
	return s;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	long long int n;
    	cin>>n;
    	if(n%2050 != 0){
    		cout<<-1<<endl;
    	}
    	else{
    		long long int k = n/2050;
    		cout<<sumd(k)<<endl;
    	}
    }
	return 0;
}
//g++ a1517.cpp -o run//
//https://codeforces.com/problemset/problem/1517/A//