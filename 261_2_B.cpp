#include<iostream>

using namespace std;

int main()
{
    int n, num;
    while(cin>>n)
    {
        cin>>num;
        int mini=num,maxi=num;
        long long int minc=1,maxc=1;
        for(int i=1;i<n;i++)
        {
            cin>>num;
            if(num==mini) minc++;
            if(num==maxi) maxc++;
            if(num < mini)
            {
                mini=num;
                minc=1;
            }
            if(num>maxi)
            {
                maxi=num;
                maxc=1;
            }
        }
        long long int mul;
        if(mini==maxi) mul=1;
        else
            mul=minc*maxc;
        cout<<maxi-mini<<" "<<mul<<endl;
    }
}
