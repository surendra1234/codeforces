#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    while(cin>>x1>>y1>>x2>>y2) {
    int diff1=x2-x1, diff2=y2-y1;
    if(diff1 != 0 && diff2 != 0 && abs(diff1) != abs(diff2))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(diff1==0)
    {
        x3=x1+abs(diff2);
        x4=x1+abs(diff2);
        y3=y1;
        y4=y2;
    }
    else if(diff2==0)
    {
        y3=y1+abs(diff1);
        y4=y1+abs(diff1);
        x3=x1;
        x4=x2;
    }
    else
    {
        x3=x2;
        x4=x1;
        y3=y1;
        y4=y2;
    }
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    return 0;
}
