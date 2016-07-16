/*floyd算法：直接做就可以了，暴力统计结果*/
#include<iostream>
using namespace std;
#define N 510
long long jz[N][N];
#include<cstdio>
#include<cstring>
int a[N],n,x,y;
int gcd(int b,int c)
{
    if(!c)
        return b;
    return gcd(c,b%c);
}
void input()
{
    scanf("%d",&n);
    memset(jz,10,sizeof(jz));
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n-1;++i)
    {
        scanf("%d%d",&x,&y);
        jz[x][y]=1;jz[y][x]=1;
    }
}
void floyed()
{
    for(int k=1;k<=n;++k)
      for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
        jz[i][j]=min(jz[i][j],jz[i][k]+jz[k][j]);
}
int main()
{
    input();
    floyed();
    long long ans=0;
    for(int i=1;i<=n;++i)
      for(int j=i+1;j<=n;++j)
      {
          if(gcd(a[i],a[j])==1)
          {
              ans+=jz[i][j];
          }
      }
    cout<<ans<<endl;
    return 0;
}
