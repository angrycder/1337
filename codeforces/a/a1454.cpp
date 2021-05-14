#include <bits/stdc++.h> 
using namespace std;

void print(int k[],int j){
	for (int i = 0; i < j; ++i)
	{
		cout<<k[i]<<" ";
	}
	cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n];
    	for (int i = 0; i < n; ++i)
    	{
    		arr[i]=n-i;
    	}
    	if(n&1){
    		swap(arr[(n+1)/2 -1],arr[(n+1)/2]);
    		print(arr,n);
    	}
    	else{
    		print(arr,n);
    	}
    }
	return 0;
}
//g++ a1454.cpp -o run//
//https://codeforces.com/problemset/problem/1454/A//