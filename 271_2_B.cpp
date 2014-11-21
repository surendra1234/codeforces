#include <bits/stdc++.h>

using namespace std;

#define fr(i,n) for(int i=0;i<n;i++)
#define f(i,init,n) for(int i=init;i<n;i++)

int bsearch(int AR[], int N, int VAL)
{
    int Mid,Lbound=0,Ubound=N-1;

	while(Lbound<=Ubound)
	{
		Mid=(Lbound+Ubound)/2;
		if(VAL==AR[Mid])
			return Mid+1;
		if( Mid <N-1 && VAL>AR[Mid] && VAL <=AR[Mid+1])
			return Mid+2;
		if(VAL> AR[Mid])
			Lbound=Mid+1;
		else if(VAL<AR[Mid])
        {
            if(Mid==0) return 1;
			Ubound=Mid-1;
        }
	}

	return 0;
}

int main()
{
	int n,m, arr[100001];
	int temp;
	while(cin>>n)
	{
		cin>>arr[0];
		f(i,1,n){
			cin>>temp;
			arr[i]=arr[i-1]+temp;
		}
		cin>>m;
		fr(i,m){
			cin>>temp;
			cout<<bsearch(arr, n, temp)<<endl;
		}
            
	}
}