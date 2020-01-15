#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t > 0)
    {
        int n;
        cin>>n;
        int arr[8] = {0,0,0,0,0,0,0,0};
        int atm,scr;
        for(int i = 0;i < n;i++)
        {
            cin>>atm>>scr;
            if((atm == 1)&&(scr > arr[0]))
            arr[0] = scr;
            else if((atm == 2)&&(scr > arr[1]))
            arr[1] = scr;
            else if((atm == 3)&&(scr > arr[2]))
            arr[2] = scr;
            else if((atm == 4)&&(scr > arr[3]))
            arr[3] = scr;
            else if((atm == 5)&&(scr > arr[4]))
            arr[4] = scr;
            else if((atm == 6)&&(scr > arr[5]))
            arr[5] = scr;
            else if((atm == 7)&&(scr > arr[6]))
            arr[6] = scr;
            else if((atm == 8)&&(scr > arr[7]))
            arr[7] = scr;
        }
        int sum = 0;
        for(int i = 0;i < 8;i++)
        {
            sum = sum + arr[i];
        }
        cout<<sum<<endl;
        t--;
    }
    return 0;
}