#include<bits/stdc++.h>
using namespace std;

int srch(int arr[],int n,int size)
{
    int j = 0;
    for(int i = 0;i < size;i++)
    {
        if(arr[i] == n)
        j++;
    }
    return j;
}

int main()
{
    int t;
    cin >> t;
    while(t > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i < n;i++)
        {
            cin>>arr[i];
        }
        int a = srch(arr,0,n);
        int b = srch(arr,2,n);
        int k = ((a*(a - 1) + (b*(b - 1))))/2;
        cout<<k<<endl;
        t--;
    }
    return 0;
}