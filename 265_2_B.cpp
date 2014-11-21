#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n,tCnt,cnt;
    bool state;
    bool str[1001];
    while(cin>>n)
    {

        //cin>>str;
        state=0,tCnt=0,cnt=0;
        for(int i=0;i<n;i++)
        {
        	cin>>str[i];
            if(str[i]==0)
            {
                if(cnt) tCnt+=cnt+1;
                cnt=0;
            }
            if(str[i]==1) cnt++;
            //if() cnt++;
        }
        if(cnt) tCnt+=cnt+1;
        cout<<max(0,tCnt-1)<<endl;
    }
    return 0;
}

