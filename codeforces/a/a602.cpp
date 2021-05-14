 #include <bits/stdc++.h> 
 using namespace std;
 
 typedef long long int lli;
 
 int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);
     int n,x,tmp;
     lli c1 =0;
     cin>>n>>x;
     for (int i = 0; i < n; ++i)
     {
     	cin>>tmp;
     	c1+= pow(x,n-i-1)*tmp;
     }
     int m,y;
     lli c2 =0;
     cin>>m>>y;
     for (int i = 0; i < m; ++i)
     {
     	cin>>tmp;
     	c2+=pow(y,m-i-1)*tmp;
     }
     if(c1>c2){
     	cout<<">"<<endl;
     }
     else if(c1<c2){
     	cout<<"<"<<endl;
     }
     else if(c1==c2){
     	cout<<"="<<endl;
     }
 }
 
 //g++ a602.cpp -o run
 //https://codeforces.com/problemset/problem/602/A