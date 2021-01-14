//Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/count-numbers-46/
/*
  Author : Rajat Soni
*/

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, t, i, count=0, k;
    cin>>t;
    for(i=0; i<t; i++)
    {
        count=0;
        k=0;
        cin>>n;
        char s[n];
        cin>>s;
        for(int j=0; j<n; j++)
        {
            if(isdigit(s[j])!=0&&k==0)
            {
                count++;
                k=1;
            }
            if(isdigit(s[j])==0)
                k=0;
        }
        cout<<count<<"\n";
    }
    return 0;
}
