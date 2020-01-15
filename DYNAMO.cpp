#include<bits/stdc++.h>
using namespace std;

long int fact(long int n)
{
    long int t = 1;
    for(long int i = 0;i < n;i++)
    {
        t = t * 10;
    }
    return t;
}

int main()
{
    long int t;
    cin>>t;
    while(t > 0)
    {
        t--;
        long int n,a;
        cin>>n;
        cin>>a;
        long int s = 2*fact(n) + a;
        cout<<s<<endl;
        long int b;
        cin>>b;
        long int c = fact(n) - b;
        cout<<c<<endl;
        long int d;
        cin>>d;
        long int e = fact(n) - d;
        cout<<e<<endl;
        long int out;
        cin>>out;
        if(out==-1)
        return 0;
    }
}