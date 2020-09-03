#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


bool cycleUtil(int v, bool visited[], vector<int>adj[], int parent)
{
	visited[v] = true;
	vector<int>::iterator it;
	for(it = adj[v].begin(); it != adj[v].end() ; ++it)
	{
		if(!visited[*it])
		{
			if(cycleUtil(*it,visited,adj,v))
			{
				return true;
			}
		}

		else if(*it != parent)
		{
			return true;
		}
	}

	return false;
}




bool isCyclic(vector<int>adj[], int n)
{
	int c = 0;
	bool visited[n];
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}

	for (int i = 0; i < n; ++i)
	{
		if(!visited[i])
		{
			if(cycleUtil(i,visited,adj,-1))
			{
				return true;
			}
		}
	}

	return false;
}


void solve()
{
	int n,m;cin>>n>>m;
	int u,v;
	vector<int>adj[n];
	for (int i = 0; i < m; ++i)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}

	cout<<isCyclic(adj,n)<<endl;


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