#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


void solve()
{
	string s;
	cin>>s;
	stack<string>st;
	
	//0(n) solution with exec time 0.01 sec

	int j=0;
	for (int i = 0; i < s.size(); ++i)
	{
		string s1;
		if(s[i]=='.')
		{
			s1 = s.substr(j,i-j);
			st.push(s1);
			// cout<<s1<<endl;
			j=i+1;

		}
		if(i==s.size()-1)
			{
				s1 = s.substr(j,s.size());
				st.push(s1);
			}
		
	}

	cout<<st.top();
	st.pop();
	while(!st.empty())
	{
		cout<<"."<<st.top();
		st.pop();
	}
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