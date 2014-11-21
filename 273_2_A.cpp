#include <bits/stdc++.h>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define fs(i,s,n) for(int i=s;i<n;i++)
#define fse(i,s,e) for(int i=s;i<e;i++)
#define fr(i,n) for(int i=n;i>=0;i--)

int main()
{
    int c1,c2,c3,c4,c5,sum;
	while(cin>>c1>>c2>>c3>>c4>>c5)
	{
		sum=c1+c2+c3+c4+c5;
		if(sum%5 != 0 || sum==0){
			cout<<"-1"<<endl;
			continue;
		}
		else cout<<sum/5<<endl;
	}
}