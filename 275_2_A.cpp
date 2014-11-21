#include <bits/stdc++.h>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define fs(i,s,n) for(int i=s;i<n;i++)
#define fse(i,s,e) for(long long int i=s;i<e;i++)
#define fr(i,n) for(int i=n;i>=0;i--)

long long int gcd(long long int a,long long int b)
{
    //cout<<a<<" "<<b<<endl;
    if(b==0) return a;
    else return gcd(b,a%b);
}


int main()
{
    unsigned long long int l,r;
    bool flag;
	while(cin>>l>>r)
	{
        //cout<<l<<r<<endl;
	    flag =false;
        fse(i,l,r-1){
            if(flag==true) break;
            fse(j,l+1,r){
                if(flag==true) break;
                fse(k,l+2,r+1){
                    if(gcd(i,j)==1 && gcd(j,k)==1 && gcd(k,i)!=1){
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        flag=true;
                        break;
                    }
                }
            }
        }
        if(flag==false) cout<<"-1\n";
	}
}
