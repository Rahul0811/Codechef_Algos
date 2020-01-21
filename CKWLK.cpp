#include<iostream>
using namespace std;

void check(long int n)
{
    int i = 0,j = 0;
    while((n % 10) == 0)
    {
        n = n/10;
        i++;
    }
    while(((n % 2) == 0)&&(j < i))
    {
        n = n/2;
        j++;
    }
    if(n == 1)
    {
        cout<<"Yes"<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
    }
}

int main()
{
    int t;
    int i = 0;
    cin>>t;
    while(i < t)
    {
        i++;
        long int k;
        cin>>k;
        check(k);
    }
    return 0;
}