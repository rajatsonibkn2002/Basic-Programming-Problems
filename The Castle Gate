// Problem Link: https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-castle-gate-july-easy/description/
/*
  Author: Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
	int t, n, i, count, j, k;
	cin>>t;
	for(i=0; i<t; i++)
	{
		cin>>n;
		count=0;
		for(j=1; j<n; j++)
		{
			for(k=j+1; k<=n; k++)
			{
				if((j^k)<=n)
					count++;
			}
		}
		cout<<count<<endl;
	}
}
