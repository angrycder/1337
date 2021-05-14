#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	for (int k = 0; k < t; ++k)
	{
		long long n,m,x;
		cin>>n>>m>>x;
		long long i,j;
		i = x/n;
		j = x%n;
		if(j==0){
			i-=1;
			j=n;
		}
		cout<<(i+1)+((j-1)*m)<<endl;
	}
	return 0;
}
//g++ a1506.cpp -o run//
//https://codeforces.com/problemset/problem/1506/A//