#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t > 0)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i < n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr + n);
		int max = arr[0];
		cout<<max<<endl;
		t--;
	}
	return 0;
}