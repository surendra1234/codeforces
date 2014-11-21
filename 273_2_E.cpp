#include <bits/stdc++.h>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define fs(i,s,n) for(int i=s;i<n;i++)
#define fse(i,s,e) for(int i=s;i<e;i++)
#define fr(i,n) for(int i=n;i>=0;i--)

bool wavy(long long int n)
{
	if(n<100) return true;
	int f,m,l;
	f=n%10;
	m=n%(100)-f*10;
	l=n%(1000)-m*100-f*10;
	n=n/10;
	while(n>9)
	{
		if(!((m>f && m>l) || (m<f && m<l))) return false;
		f=m;
		m=l;
		l=n%(1000)-m*100-f*10;
		n=n/10;
	}
	return true;
}

int main()
{
	long long int n,k,cnt,curr;
	while(cin>>n>>k)
	{
		cnt=0;
		curr=1;
		while(cnt<k && n*curr<=100000000000000)
		{
			if(wavy(n*curr)) cnt++;
			curr++;
		}
		if(cnt==k) cout<<n*curr<<endl;
		else cout<<"-1\n";
	}	
}