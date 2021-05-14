#include <iostream> 
#include <algorithm>
using namespace std;

long long int sumd(long long int x){
	long long int s=0;
		while (x != 0) {
			s = s + x % 10;
			x = x / 10;
		}
	return s;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		if(__gcd(n,sumd(n)) != 1){
				cout<<n<<endl;			}
		else if(__gcd(n+1,sumd(n+1)) != 1){
				cout<<n+1<<endl;
			}
		else if(__gcd(n+2,sumd(n+2)) != 1){
				cout<<n+2<<endl;
			}
	}
	return 0;
}

//g++ a1498.cpp -o run//
//https://codeforces.com/problemset/problem/1498/A//