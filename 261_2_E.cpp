#include<iostream>
#include <list>
#include<cmath>

using namespace std;

long long int *val = new long long int[300000];

class Graph
{
    int V;
    list<pair <int, int > > *adj;
public:
    Graph(int V);
    void addEdge(int u, int v, int w);
    int DFS(int s, int v);
    void traverse_dfs(int u, int prev);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<pair <int, int > >[V];
}

void Graph::addEdge(int u, int v, int w)
{
    pair<int ,int> a;
    a.first=v;
    a.second=w;
    adj[u].push_back(a);
}

int Graph::DFS(int s, int v)
{
    long long int maxi=0;
    for(int i = 0; i < V; i++)
        val[i] = 0;
    for(int i = 0; i < v; i++)
    {
        if(!val[i])
            traverse_dfs(i, 0);
        maxi=max(maxi, val[i]);
    }
    return maxi;
}

void Graph::traverse_dfs (int s, int prev)
{
    list<pair<int, int> >::iterator it,it1;
    for(it = it1 = adj[s].begin(); it != adj[s].end(); it++)
    {
        if((*it).second > prev)
        {
        	//cout<<s<<" "<<val[s]<<endl;
        	if(!val[(*it).first])
        	{
            	traverse_dfs((*it).first, (*it).second);
            	val[s]=max(val[s], val[(*it).first]+1);
        	}
        	else
        	{
        		bool fl=0;
        		for(it1=adj[(*it).first].begin();it1!=adj[(*it).first].end();it1++)
        		{
        			if((*it1).second > (*it).second)
        			{
        				fl=1;
        				val[s]=max(val[s], val[(*it).first]+1);
        			}
        		}
        		if(!fl) val[s]=1;
        	}
        	//cout<<s<<" "<<val[s]<<endl;
        }
    }
}

int main()
{
    int n,m,u,v,w;
    while(cin>>n>>m)
    {
        Graph g(n);
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            g.addEdge(u-1, v-1, w);
        }
        cout<<g.DFS(0, n)<<endl;
    }
    return 0;
}

