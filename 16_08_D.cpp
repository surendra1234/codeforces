#include<iostream>
#include <list>

using namespace std;
int len[100000];
int answer;
class Graph
{
    int V;
    //int len[v];
    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

void Graph::BFS(int s)
{
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
    list<int> queue;
    visited[s] = true;
    len[s] = 0;
    queue.push_back(s);
    list<int>::iterator ite;
    while(!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
        for(ite = adj[s].begin(); ite != adj[s].end(); ++ite)
        {
            if(!visited[*ite])
            {
                visited[*ite] = true;
                len[*ite] = len[s]+1;
                queue.push_back(*ite);
            }
        }
    }
}

int main()
{
    answer = 0;
    int n,m,d,u,v;
    cin>>n>>m>>d;
    Graph g(n);
    int check[m];
    bool ans[n];
    for(int i=0;i<n;i++)
        ans[i]=1;
    for(int i=0;i<m;i++)
        cin>>check[i];
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        g.addEdge(u-1,v-1);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            len[j]=1000000;
        g.BFS(check[i]-1);
        for(int j=0;j<n;j++)
        {
            if(len[j]>d)
                ans[j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(ans[i] == 1)
            answer++;
    }
    cout<<answer<<endl;
    return 0;
}
