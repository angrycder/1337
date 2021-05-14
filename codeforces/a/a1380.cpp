#include <bits/stdc++.h> 
using namespace std;

void solve(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for (int i = 1; i < n-1; i++)
	{
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
			cout<<"yes"<<endl;
			cout<<i<<" "<<i+1<<" "<<i+2<<endl;
			return;
		}
	}
	cout<<"no"<<endl;
	return;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
	return 0;
}

//g++ a1380.cpp -o run//
//https://codeforces.com/problemset/problem/1380/A//