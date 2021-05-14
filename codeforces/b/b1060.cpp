#include <bits/stdc++.h> 
using namespace std;

typedef long long int lli;

lli sumd(lli x){
	lli s=0;
	while (x != 0) {
			s = s + x % 10;
			x = x / 10;
		}
	return s;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    lli n;
    cin>>n;
    lli dig= log10(n);
    lli num1= max((lli)0, (lli)ceil(pow(10,dig)-1));
    cout<<sumd(num1)+sumd(n-num1)<<endl;
	return 0;
}

//g++ b1060.cpp -o run
//https://codeforces.com/problemset/problem/1060/B