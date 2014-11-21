#include <bits/stdc++.h>

using namespace std;

#define fr(i,n) for(int i=0;i<n;i++)
#define f(i,init,n) for(int i=init;i<n;i++)

int main()
{
    int t,k, a,b;
    long int ans;
    long int arr[100001]={0};
	while(cin>>t>>k)
	{
		fr(i,k){
			arr[i]=1;
		}
		arr[k-1]=2;
		f(i,k,100001){
			arr[i]=(arr[i-1]+arr[i-k])%1000000007;
		}
        f(i,1,100001){
    		arr[i]=(arr[i-1]+arr[i])%1000000007;
		}
        while(t--)
        {
		    cin>>a>>b;
            if(a==1)
                cout<<arr[b-1]<<endl;
            else
            {
                ans=arr[b-1]-arr[a-2];
                if(ans<0) ans=ans+1000000007;
                cout<<ans<<endl;
            }
        }
	}
}