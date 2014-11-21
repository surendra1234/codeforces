#include <iostream>
using namespace std;

int main()
{
    int n;
    string str;
    while(cin>>n)
    {
        cin>>str;
        int i;
        for(i=0;i<n;i++)
            if(str[i]=='0') break;
        if(i<n) cout<<i+1;
        else cout<<i;
        cout<<endl;
    }
    return 0;
}
