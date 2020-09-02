#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


void DFSUtil(vector<int>adj[], int source, vector<bool>&visited)
{
	visited[source] = true;
	cout<<source<<" ";
	for(auto it:adj[source])
	{
		if(!visited[it])
		{
			DFSUtil(adj,it,visited);
		}
	}

}


void DFS(vector<int>adj[],int N)
{
	vector<bool>visited(N,false);
	for (int i = 0; i < N; ++i)
	{
		if(!visited[i])
		{
			DFSUtil(adj,i,visited);
		}
	}
}


void solve()
{
	int N,E,u,v;
	cin>>N>>E;
	vector<int>adj[N];
	while(E--)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	DFS(adj,0,N);
	cout<<endl;
}


int main()
{	
	
	fast
	int T;
	cin>>T;
	while(T--)
	{
	solve();
	}
	return 0;
}