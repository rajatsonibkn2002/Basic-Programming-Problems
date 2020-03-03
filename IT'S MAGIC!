// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/its-magic/
/* 
    Author : Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    long long int l;
    unsigned long long int n, i, c, min, s=0, k;
    cin>>n;
    unsigned long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    k=-1;
    for(i=0; i<n; i++)
    {
        c = s-a[i];
        if(k==-1 && c%7==0)
        {    
            l = i;
            min = a[i];
            k=1;
        }
        if(k!=-1 && c%7==0 && min>a[i])
        {
            min = a[i];
            l = i;        
        }
    }
    cout<<l;
    return 0;
}
