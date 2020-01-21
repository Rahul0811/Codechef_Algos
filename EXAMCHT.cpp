#include<bits/stdc++.h>
using namespace std;

long int divisors(long int n)
{
	long int count = 0;
	for(long int i = 0;i <= pow(n,0.5);i++)
	{
		if(n % i == 0)
		{
			if(n / i == i)
			count++;
			else count = count + 2;
		}
	}
	return count;
}

int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
  
int main()
{
	int t;
	cin>>t;
	while(t > 0)
	{
		long int a,b;
		cin>>a>>b;
		long int max = 0;
		if(a > b)
		max = a - b;
		else max = b - a;
		int fin = countDivisors(max);
		cout<<fin<<endl;
		t--;
	}
	return 0;
}