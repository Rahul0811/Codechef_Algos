#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t > 0)
    {
        long int n,m;
        cin>>n>>m;
        long int count = n * m;
        long int arr[n][m];
        for(long int i = 0;i < n;i++)
        {
            for(long int j = 0;j < m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(long int i = 1;i < n - 1;i++)
        {
            for(long int j = 1;j < m - 1;j++)
            {
                long int p = 1;
                while((i - p >= 0)&&(i + p <= (n - 1))&&(j - p >= 0)&&(j + p <= (m - 1)))
                {
                    if((arr[i - p][j] == arr[i + p][j])&&(arr[i][j + p] == arr[i][j - p]))
                    {
                        count++;
                        p++;
                    }
                    else break;
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
    return 0;
}