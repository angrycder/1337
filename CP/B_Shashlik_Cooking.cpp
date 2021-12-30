#include <bits/stdc++.h>
#define maxn 10005
using namespace std;
int pre[maxn];
int n,k;
 
int main()
{
  scanf("%d%d",&n,&k);
  int ans;
  if(k == 0){
    ans = n;
    for(int i=1;i<=n;i++){
      pre[i] = i;
    }
  }
  else if(n <= (2 * k + 1)){
    ans = 1;
    pre[1] = n / 2 + 1;
  }
  else if(n > (2 * k + 1)){
    if(n % (2 * k + 1) > k || n % (2 * k + 1) == 0){
      ans = 0;
      for(int i=k+1;i<=n;i+=(2*k+1)){
        pre[++ans] = i;
      }
    }
    else{
      ans = 0;
      for(int i=1;i<=n;i+=(2*k+1)){
        pre[++ans] = i;
      }
    }
  }
  printf("%d\n",ans);
  for(int i=1;i<=ans;i++){
    printf("%d%c",pre[i],i==ans?'\n':' ');
  }
  return 0;
}