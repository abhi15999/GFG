#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;	

// int binarySearch(int arr[],int n,int x)
// {
// 	int low=0,high=n-1;
// 	while(low<=high)
// 	{
// 		int mid=(low+high)/2;

// 		if(arr[mid]==x)
// 			return mid;
// 		else if(arr[mid]>x)
// 			high=mid-1;
// 		else if(arr[mid]<x)
// 			low=mid+1;
// 	}
// 	return -1;

// }

int ImprovisedBinarySearch(int arr[],int low,int high,int key)
{

	if(low>high)
		return -1;

	int mid=low+(high-low)/2;
	if(arr[mid]==key)
	{
		return mid;
	}

	if(arr[low]<=arr[mid]) 
	{
		if(key>=arr[low] && key<=arr[mid])
		{
			return ImprovisedBinarySearch(arr,low,mid-1,key);
		}

		return ImprovisedBinarySearch(arr,mid+1,high,key);
	}
	
	if(key>=arr[mid] && key<=arr[high]){
		return ImprovisedBinarySearch(arr,mid+1,high,key);
	}

	return ImprovisedBinarySearch(arr,low,mid-1,key);
}


// int Findpivot(int arr[],int low,int high)
// {
// 	if(low>high)
// 		return -1;
// 	if(high == low)
// 		return low;
// 	int mid=low+((high-low))/2;
// 	if(mid<high && arr[mid]>arr[mid+1])
// 		return mid;
// 	if(mid>low && arr[mid]<arr[mid-1])
// 		return (mid-1);
// 	if(arr[low]>=arr[mid])
// 		return Findpivot(arr,low,mid-1)

// 	return Findpivot(arr,mid+1,high);

// }





int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

   fast
   cin>>t;
   
   while(t--)
   {
   	 int n,x;cin>>n;cin>>x;
  	 int a[n];
  	 for (int i = 0; i < n; ++i)
  	 {
  	 	cin>>a[i];
  	 }

  	 cout<<ImprovisedBinarySearch(a,0,n-1,x);

  	 


   }
   return 0;
}
