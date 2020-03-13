// Problem Link :- https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/airfares-dbef7f12/
/*
  Author : Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    int s, t, x, count=0;
	long long int p, h, cost=0;
    cin>>p>>s>>t>>h>>x;
    while(count++!=x)
    {
        if(s<=t)
            cost = cost + h;
        else
            cost = cost + p;
        s--;
    }
    cout<<cost;
    return 0;
}
