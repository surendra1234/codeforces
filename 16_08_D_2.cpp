#include<iostream>
#include<conio.h>
using namespace std;
int a[10000][10000];
int i,j,k,c=1, b[100001], ans=0,s;

int main()
{
    int n,m,d;
    cin >>n>>m>>d;
    for(i=1; i<=m;i++)
    {
        cin>>s;
        b[s]=1;
    }
    for(k=1;k<=n-1;k++)
    {
        cin>>i>>j;
        a[i][j]=c;
        a[j][i]=c;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]== 0 && i !=j)
                a[i][j]=1000000;
        }
    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
        }
    }
    for(k=1;k<=n;k++)
    {
        bool flag = true;
        for(i=1;i<=n;i++)
        {
            if(b[i]==1)
            {
                if(a[i][k]>d)
                    flag = false;
            }
        }
        if(flag==true)
            ans++;
    }
    cout<<ans<<endl;
}


