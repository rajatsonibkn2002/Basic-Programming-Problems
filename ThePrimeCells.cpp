// Problem Link :- https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/pythagorean-triangles-0158a4c5/
/*
  Author : Rajat Soni
*/

#include <iostream>
using namespace std;
int isprime(int x)
{ 
    for (int i = 2; i < x; i++) 
        if (x % i == 0) 
            return 0;
    return 1;
}
int main()
{
    int n, sum, k, i, j, count=0;
    cin>>n;
    int g[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>g[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum = 0;
            k = j+1;
            if(k<n)
                sum = sum + g[i][k];
            k = j-1;
            if(k>=0)
                sum = sum + g[i][k];
            k = i+1;
            if(k<n)
                sum = sum +  g[k][j];
            k = i-1;
            if(k>=0)
                sum = sum + g[k][j];
            if(isprime(sum)==1)
                count++;
        }
    }
    cout<<count;
    return 0;
}
