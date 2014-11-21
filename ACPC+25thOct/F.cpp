#include <bits/stdc++.h>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define fs(i,s,n) for(int i=s;i<n;i++)
#define fse(i,s,e) for(int i=s;i<e;i++)
#define fr(i,n) for(int i=n;i>=0;i--)

int ind;
long int bsum;
void cut(vector<int> arr, int n, int k){
    int sum=0;
    f(i,k){
        sum+=arr[i];
    }
    bsum=sum;
    fs(i,k,n){
    	sum=sum+arr[i]-arr[i-k];
    	if(sum>bsum){
    		bsum=sum;
    		ind=i-k+1;
    	}
    }
    return;
}

int main()
{
	int n,k,a;
	vector<int> arr;
	long int sum=0;
	cin>>n>>k;
	f(i,n){
		cin>>a;
        arr.push_back(a);
		sum+=arr[i];
	}
	if(2*k>=n){
		cout<<sum<<endl;
		return 0;
	}
    sum=0;
	ind=bsum=0;
	cut(arr,n,k);
    //cout<<ind<<" "<<bsum<<endl;
	sum+=bsum;
	arr.erase(arr.begin()+ind, arr.begin()+ind+k);
    n-=k;
	ind=bsum=0;
	cut(arr,n,k);
    //cout<<ind<<" "<<bsum<<endl;
	sum+=bsum;
	cout<<sum<<endl;
}