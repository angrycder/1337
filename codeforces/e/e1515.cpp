#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD;

int N;
ll dp[405][405];

ll fastexp(ll b, ll exp){
  if (exp==0)
    return 1;
  ll temp=fastexp(b,exp/2);
  temp=(temp*temp)%MOD;
  if (exp%2==1)
    temp*=b;
  return temp%MOD;
}

ll fact[405],inv[405],choose[405][405],pow2[405];

void precompute(){
  fact[0]=1;
  inv[0]=1;
  for (int i=1;i<=N;i++){
    fact[i]=(fact[i-1]*i)%MOD;
    inv[i]=fastexp(fact[i],MOD-2);
  }
  for (int i=0;i<=N;i++)
    for (int j=0;j<=i;j++)
      choose[i][j]=((fact[i]*inv[j])%MOD*inv[i-j])%MOD;
  for (int i=0;i<=N;i++)
    pow2[i]=fastexp(2,i);
}

int main()
{
  cin>>N>>MOD;
  precompute();
  dp[0][0]=1;
  for (int i=0;i<N;i++){
    for (int j=0;j<=i;j++){
      for (int k=1;i+k<=N;k++){
  dp[i+k+1][j+k]+=((dp[i][j]*pow2[k-1])%MOD*choose[j+k][k]);
  dp[i+k+1][j+k]%=MOD;
      }
    }
  }
  ll ans=0;
  for (int i=0;i<=N;i++)
    ans=(ans+dp[N+1][i])%MOD;
  cout<<ans<<endl;
  return 0;
}

//this was way out of my league XD

//g++ e1515.cpp -o run
//https://codeforces.com/problemset/problem/1515/e