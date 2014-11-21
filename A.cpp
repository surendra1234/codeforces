#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, y;
    long long int m;
    cin>>x>>y;
    m = abs(x) + abs(y);
    if(x > 0 && y > 0)
        cout<<"0 "<<m<<" "<<m<<" 0"<<endl;
    else if(x > 0 && y < 0)
        cout<<"0 "<<m<<" "<<(-1)*m<<" 0"<<endl;
    else if(x < 0 && y > 0)
        cout<<(-1)*m<<" 0 0 "<<m<<endl;
    else
        cout<<(-1)*m<<" 0 0 "<<(-1)*m<<endl;
}
