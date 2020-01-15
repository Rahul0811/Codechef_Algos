#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int j = 0;
    while(j < t)
    {
        int brick[3];
        int s;
        cin>>s>>brick[0]>>brick[1]>>brick[2];
        int hit;
        if( (brick[0] + brick[1] > s)&&( brick[1] + brick[2] > s) )
        hit = 3;
        else if(s >= (brick[0] + brick[1] + brick[2]))
        hit = 1;
        else hit = 2;
        cout<<hit<<endl;
        j++;
    }
    return 0;
}