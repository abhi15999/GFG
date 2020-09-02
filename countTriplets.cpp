#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int triplets(vector<int>&a)
{
	int c = 0,n = a.size();
	for (int i = n-1; i > 0; --i)
	{
		// 1 2 3 5 -> i = 5
		int j=0,k=i-1;
		// j = 1 , k = 3

		while(j<k)
		{
			if((a[k] + a[j]) == a[i])
			{
				c++;
				j++;
				k--;
			}
			else if((a[k] + a[j]) > a[i]) {
				k--;
			}
			else if((a[k] + a[j]) < a[i]) {
					j++;
			}
		}
	}

	c =(c == 0)?-1 : c;

	return c;
}



void solve()
{
	int n;
	cin>>n;
	vector<int>a(n);

	for(int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}	
	// 1 5 3 2
	sort(a.begin(), a.end());
	// 1 2 3 5
	cout<<triplets(a)<<endl;
	
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