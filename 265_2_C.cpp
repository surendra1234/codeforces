#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n,p,back;
    bool flag;
    char c1;
    string str;
    while(cin>>n>>p)
    {
        cin>>str;
        back=0,flag=0;
        int i;
        for(i=n-1;flag==0 && i>=0;i--)
        {
            c1=str[i];
            back++;
            for(int j=c1-'a'+1,k=1;flag==0 && j<p;j++,k++)
            {
                if(i-2>=0)
                {
                    if(str[i-1]!= (char)(c1+k) && str[i-2]!= (char)(c1+k))
                    {
                        flag=1;
                        str[i]=(char)(c1+k);
                    }
                    //cout<<"if "<<i<<" "<<str<<"\n";
                }
                else if(i-1>=0)
                {
                    if(str[i-1]!= (char)(c1+k))
                    {
                        flag=1;
                        str[i]=(char)(c1+k);
                    }
                    //cout<<"eif "<<i<<" "<<str<<"\n";
                }
                else
                {
                    flag=1;
                    str[i]=(char)(c1+k);
                    //cout<<"e "<<i<<" "<<str<<"\n";
                }
            }
        }
        if(flag==0)
        {
            cout<<"NO\n";
            continue;
        }
        i=i+2;
        //cout<<i<<" "<<str<<"\n";
        for(int k=i;k<n;k++)
        {
            c1='a',flag=0;
            for(int j=0;flag==0 && j<p;j++)
            {
                if(k-2>=0)
                {
                    if(str[k-1]!= (char)(c1+j) && str[k-2]!= (char)(c1+j))
                    {
                        str[k]=(char)(c1+j);
                        flag=1;
                    }
                }
                else if(k-1>=0)
                {
                    if(str[k-1]!= (char)(c1+j))
                    {
                        flag=1;
                        str[k]=(char)(c1+j);
                    }
                }
                else
                {
                    flag=1;
                    str[k]=(char)(c1+j);
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
