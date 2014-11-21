#include<iostream>
#include<cstring>
using namespace std;
char arr[2001][2001];
int ans[2001][2001];
int n, m, ans1, dup, term;
void check(int n, int m, int &val, int val2)
{
	val2++;
	if(term==-1) return;
    if(arr[n][m]=='#')
    {
        cout<<val2<<endl;
    	val=0;
    	if(val2>ans1) dup=2;
    	if (val2==ans1) dup=0;
    }
    else if(arr[n][m]=='*')
    {
    	val = ans[n][m];
    	if(val2+ans[n][m] == ans1) dup=1;
    }
    else if(arr[n][m]=='@') term=-1;
    else if(arr[n][m]=='>')
    {
    	arr[n][m]='@';
    	check(n, m+1, val, val2);
    }
    else if(arr[n][m]=='<')
    {
    	arr[n][m]='@';
    	check(n, m-1, val, val2);
    }
    else if(arr[n][m]=='^')
    {
    	arr[n][m]='@';
    	check(n-1, m, val, val2);
    }
    else
    {
    	arr[n][m]='@';
    	check(n+1, m, val, val2);
    }
    arr[n][m]='*';
    ans[n][m]=val;
    val++;
}
int main()
{
    while(cin>>n>>m)
    {
    	term=0, ans1=0, dup=2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='#' || arr[i][j]=='*') continue;
                int k;
                check(i, j, k, 0);
                if(ans1<ans[i][j]) ans1=ans[i][j];
                if(term==-1)
                {
                	cout<<-1<<endl;
    				break;
                }
            }
            if(term==-1) break;
        }
        if(term==-1) {}
        else if(dup) cout<<2*ans1-1<<endl;
        else cout<<2*ans1<<endl;
    }
}
