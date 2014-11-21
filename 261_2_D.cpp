#include<iostream>
using namespace std;

int main()
{
    int n, arr[1000000],fl[1000000],fr[1000000];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            int cl=1,cr=1;
            for(int j=0;j<i;j++)
            {
                if(arr[i]==arr[j]) cl++;
                if(arr[n-i-1]==arr[n-1-j]) cr++;
            }
            fl[i]=cl;
            fr[n-1-i]=cr;
        }
        long long int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(fl[i]>fr[j]) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
