//Problem Link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/find-the-numbers-75f24949/description/
/*
  Author: Rajat Soni
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, i, count=0;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a, a+n);
	if(a[0]!=a[1])
	{
		cout<<a[0]<<" ";
		count++;
	}
	for(i=1; i<n-1  && count<=2; i++)
	{
		if(a[i]!=a[i-1] && a[i]!=a[i+1])
		{
			cout<<a[i]<<" ";
			count++;
		}
	}
	if(a[n-1]!=a[n-2])
		cout<<a[n-1]<<" ";
}
