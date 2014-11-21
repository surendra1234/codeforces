#include <bits/stdc++.h>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define fs(i,s,n) for(int i=s;i<n;i++)
#define fse(i,s,e) for(int i=s;i<e;i++)
#define fr(i,n) for(int i=n;i>=0;i--)

int main()
{
	int arr[3];
	while(cin>>arr[0]>>arr[1]>>arr[2])
	{
		sort(arr,arr+3);
		if(arr[0]==1)
		{
			cout<<(arr[0]+arr[1])*arr[2]<<endl;
		}
		else
		{
			cout<<arr[0]*arr[1]*arr[2]<<endl;
		}
	}
}