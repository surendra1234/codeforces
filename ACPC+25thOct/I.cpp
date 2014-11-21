#include <bits/stdc++.h>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define fs(i,s,n) for(int i=s;i<n;i++)
#define fse(i,s,e) for(int i=s;i<e;i++)
#define fr(i,n) for(int i=n;i>=0;i--)

int cmp(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int main()
{
	int n,arr[2001];
	cin>>n;
	f(i,n){
		cin>>arr[i];
	}
	qsort(arr,n,4,cmp);
	int sum=arr[n-1],ind=0;
	while(sum-arr[ind]>=0 && ind<n-1){
		sum-=arr[ind];
		ind++;
	}
	cout<<ind+1<<endl;
}