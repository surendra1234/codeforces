#include <bits/stdc++.h>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define fs(i,s,n) for(int i=s;i<n;i++)
#define fse(i,s,e) for(int i=s;i<e;i++)
#define fr(i,n) for(int i=n;i>=0;i--)

int main()
{
	long long int n,m, ansmin,ansmax, p,q;
	while(cin>>n>>m)	
	{
		ansmin=0;
		ansmax=0;
		p=n/m;
		q=n%m;
		ansmin=(m-q)*(p)*(p-1)/2;
		ansmin=ansmin+q*((p+1)*(p)/2);
		p=n-m+1;
		ansmax=p*(p-1)/2;
		cout<<ansmin<<" "<<ansmax<<endl;
	}
}