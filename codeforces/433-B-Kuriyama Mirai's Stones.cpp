#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 100006
__int64 sum;
__int64 pp[maxn]={0},p[maxn]={0},liu[maxn],xp[maxn];
int main()
{
    int i,j,k;
    int t,n,m;
    int l,r;
    while(scanf("%d",&n)!=EOF)
    {
        p[0]=0;
        for(i=1;i<=n;i++)
        {
            scanf("%I64d",&liu[i]);
            xp[i]=liu[i];
            p[i]=p[i-1]+liu[i];
        }
        xp[0]=0;
        sort(xp,xp+n+1);
        for(i=1;i<=n;i++)
            pp[i]=pp[i-1]+xp[i];
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&m);
            if(m==1)
            {
                scanf("%d%d",&l,&r);
                sum=p[r]-p[l-1];
                printf("%I64d\n",sum);
            }
            else if(m==2)
            {
                scanf("%d%d",&l,&r);
                sum=pp[r]-pp[l-1];
                printf("%I64d\n",sum);
            }
        }
    }
    return 0;
}