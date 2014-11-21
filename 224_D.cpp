#include<iostream>
#include <list>
#include<cstring>

using namespace std;
char *color = new char[4000001];
int *f = new int[4000001];
int ans;
bool cycle, twoPath, diff;
class Graph
{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int s, int v);
    void traverse_dfs(int u);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int s, int v)
{
    for(int i = 0; i < V; i++)
    {
        color[i] = 'W';
        f[i] = 0;
    }
    for(int i = 0; i < v; i++)
    {
        if(color[i] == 'W')
        {
            diff=false;
            traverse_dfs(i);
            //cout<<"asd ";
        	if(f[i])
        	{
        		if(f[i] == ans && diff) twoPath=true;
        		if(f[i] > ans)
        		{
            		if(twoPath) twoPath=false;
            		ans=f[i];
        		}
        		cout<<"node "<<i<<" dis "<<f[i]<<" ans "<<ans<<" two "<<twoPath<<endl;
        		if(cycle) return;
        	}
        }
    }
}

void Graph::traverse_dfs (int s)
{
    //cout<<s<<" ";
    //d[s] = ++tTime;
    list<int>::iterator it;
    it = adj[s].begin();
    //cout<<adj[0].size()<<"as ";
    if(adj[s].size())
    {
        //cout<<"asd ";
        color[s] = 'G';
        if(color[*it] == 'W')
        {
            traverse_dfs(*it);
            f[s] = f[*it]+1;
        }
        if(color[*it] == 'G')
        {
            cycle = true;
        }
        if(color[*it] == 'B')
        {
            f[s]=f[*it]+1;
        }
        color[s] = 'B';
        //cout<<"asd ";
    }
    else
    {
        diff=true;
        f[s]=0;
    }
}

int main()
{
    char c;
    int node, n, m;
    while(cin>>n>>m)
    {
        ans=0;
        cycle=false, twoPath=false;
    	Graph g(m*n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                node=i*m+j;
                cin>>c;
                if(c=='<') g.addEdge(node, node-1);
                else if(c=='>') g.addEdge(node, node+1);
                else if(c=='v') g.addEdge(node, node+m);
                else if(c=='^') g.addEdge(node, node-m);
            }
        }
        g.DFS(0, m*n);
        if(cycle) cout<<"-1";
        else if(twoPath) cout<<2*ans;
        else cout<<2*ans-1;
        cout<<endl;
    }
    return 0;
}
