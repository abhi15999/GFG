#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//0(n*n!) using Backtracking	

void permute(string s,int low, int high)
{
	if(low==high)
	{
		cout<<s<<" ";
	}
	else
	{
		for (int i = low; i <= high; ++i)
		{
			swap(s[low],s[i]);
			permute(s,low+1,high);
			swap(s[low],s[i]); //BACKTRACK

		}
	}		
}


void solve()
{
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	permute(s,0,s.size()-1);	
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