#include <bits/stdc++.h>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define fs(i,s,n) for(int i=s;i<n;i++)
#define fse(i,s,e) for(int i=s;i<e;i++)
#define fr(i,n) for(int i=n;i>=0;i--)

int main()
{
	long long int arr[3],ans;
	while(cin>>arr[0]>>arr[1]>>arr[2])
	{
		ans=0;
		sort(arr, arr+3);
		if(arr[2]>=2*(arr[0]+arr[1]))
			ans=arr[0]+arr[1];
		else{
			ans+=arr[0];
			arr[1]-=arr[0];
			arr[2]-=arr[0];
			if(arr[1]==0 && arr[2]>=3) ans+=arr[2]/3;
			else ans+=min((arr[1]+arr[2])/3, arr[1]);
		}
		cout<<ans<<endl;
	}	
}