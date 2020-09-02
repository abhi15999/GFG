#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


void solve()
{
	int n,s;
	cin>>n>>s;
	vector<int>a(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i]; 
	}




	//O(n^2) worst case time complexity............

	for (int i = 0; i < n; ++i)
	{
		int sum=a[i];
		for (int j = i+1; j <= n; ++j)
		{
			if(sum==s)
			{
				cout<<i+1<<" "<<j<<endl;
				return ;
			}
			if(sum>s || j==n)
			{
				break;
			}
			sum+=a[j];
			
		}
	}







	//O(n) solution.....


	int l=0,sum=a[0]; //Keep a track of the first element and remove it when subarray sum exceeds required.

	for (int i = 1; i < n; ++i)
	{
		//1 2 3 7 5

		if(sum>s)
		{
			sum-=a[l];
			l++;
		}

		if(sum==s)
		{
			cout<<l+1<<" "<<i<<endl;
		}

		sum+=a[i];

	}

}


int main()
{	
	fast
	solve();
	return 0;
}