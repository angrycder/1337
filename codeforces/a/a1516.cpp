#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    int j =0;
    while(k && (j<n-1)){
    	if(arr[j] < k){
    		arr[n-1]+=arr[j];
    		k-=arr[j];
    		arr[j]=0;
    		j++;
    	}
    	else{
    		arr[j]-=k;
    		arr[n-1]+=k;
    		k=0;
    	}
    }
    for (int i = 0; i < n; ++i)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
	return 0;
}
//g++ a1516.cpp -o run//
//https://codeforces.com/problemset/problem/1516/A//