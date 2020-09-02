#include <bits/stdc++.h>
using namespace std; 

#define M 100
#define N 100

void ansUtil(int a[][N], int x,int y, int prev, int k)
{
    if(x < 0 || x >= M || y < 0 || y >= N)
    {
        return;
    }

    if(a[x][y]!=prev)
    {
        return;
    }

    if(a[x][y] == k)
    {
        return;
    }

    a[x][y] = k;

    ansUtil(a,x+1,y,prev,k);
    ansUtil(a,x-1,y,prev,k);
    ansUtil(a,x,y+1,prev,k);
    ansUtil(a,x,y-1,prev,k);

}

void ans(int a[][N],int x,int y,int k)
{
    int prev = a[x][y];

    ansUtil(a,x,y,prev,k);

}


void solve()
{
    int n,m,x,y,k;
    cin>>m>>n;
    int a[M][N];
    for (int i = 0; i < m; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
          cin>>a[i][j];
      }
    }
    cin>>x>>y>>k;
    ans(a,x,y,k);

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout<<a[i][j]<<" ";
        }
    }

    cout<<endl;



}


int main() {    
    int T;
    cin>>T;
    while(T--)
    {
       solve();
    }
    return 0;
}