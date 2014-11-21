#include<iostream>
using namespace std;

int main()
{
    int a, b, answer=0;
    while(cin>>a>>b)
    {
        answer=a;
        while(a>=b)
        {
            answer+=a/b;
            a=(a/b)+(a%b);
        }
        cout<<answer<<endl;
    }
}
