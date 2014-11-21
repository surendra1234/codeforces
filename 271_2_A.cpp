#include <bits/stdc++.h>

using namespace std;

int main()
{
	char c;
	string str;
	string st="qwertyuiopasdfghjkl;zxcvbnm,./";
	//char arr[30]={'q', 'w', 'e', 'r', 't','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
	while(cin>>c)
	{
		cin>>str;
	for(int i=0;i<str.length();i++)
	{
		for(int j=0;j<st.length();j++)
		{
			if(str[i]==st[j])
			{
				if(c=='R') cout<<st[j-1];
				else cout<<st[j+1];
			}
		}
	}
	}
	cout<<endl;
}