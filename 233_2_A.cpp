#include<iostream>
using namespace std;

int main()
{
    int n, p, k;
    while(cin>>n>>p>>k)
    {
        if(p<1 || p>n)
        {
            cout<<endl;
            continue;
        }
        else if (p==1 && p==n)
        {
            cout<<"(1)";
        }
        else if(p==1)
        {
            cout<<"(1) ";
            int i;
            for(i=2;i<=n && i<=p+k;i++)
            {
                cout<<i<<" ";
            }
            if(i!=n+1)
            cout<<">>";
        }
        else if(p==n)
        {
        	if(p-k > 1)
            	cout<<"<< ";
            for(int i=p-k;i<n;i++)
            {
                if(i>0)
                    cout<<i<<" ";
            }
            cout<<"("<<p<<")";
        }
        else
        {
        	if(p-k > 1)
            	cout<<"<< ";
            int i;
            for(i=p-k;i<=n && i<=p+k;i++)
            {
                if(i==p)
                    cout<<"("<<i<<") ";
                else if(i>0)
                    cout<<i<<" ";
            }
            if(i != n+1)
            	cout<<">>";
        }
        cout<<endl;
    }
}
