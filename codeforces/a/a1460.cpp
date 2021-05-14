#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n,tmp,a=0,b=0,i=0,j=0;
    	cin>>n;
    	int arr[101]={};
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>tmp;
    		arr[tmp]++;
    	}
    	while(arr[i]){
    		a++;
    		arr[i]--;
    		i++;
    	}
    	/*for (int i = 0; i < 101; ++i)
    	{
    		cout<<arr[i]<<" ";
    	}
    	cout<<endl;*/
    	while(arr[j]){
    		b++;
    		arr[j]--;
    		j++;
    	}
    	//cout<<a<<","<<b<<endl;
    	cout<<a+b<<endl;
    }
	return 0;
}

//g++ a1460.cpp -o run//
//https://codeforces.com/problemset/problem/1460/A//