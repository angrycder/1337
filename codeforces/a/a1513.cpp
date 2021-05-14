#include<iostream>
#include<vector>

using namespace std;

void print(int arr[],int l){
	for(int i=0;i<l;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n,k;
		cin >> n >>k;
		if(2*k>=n){
			 cout<<-1<<endl;
             continue;
		}
		else{
			int ret[n]={};
			for(int i = 0; i <(2*k+1);i+=2)
			{
				ret[i]=i/2 + 1;
			}
			for(int i = 1; i <(2*k+1);i+=2)
			{
				ret[i]=n- (i-1)/2 ;
			}
			int c = k+2;
			for(int i =2*k + 1;i<n;i+=1){
				ret[i]=c;
				c+=1;
			}
			print(ret,n);
		}
	}
    return 0;
}
//g++ a1513.cpp -o run//

//https://codeforces.com/problemset/problem/1513/A
