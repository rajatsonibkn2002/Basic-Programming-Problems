// Problem Link :- https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/monk-and-conversion-game-code-monk/
/*
  Author :- Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        long long int a[n], b[n];
        for(int j=0; j<n; j++)
            cin>>a[j];
        for(int j=0; j<n; j++)
            cin>>b[j];
        for(int j=0; j<(n-1); j++)
        {
            if(a[j]>b[j])
            {
                a[j+1] = a[j+1] + (a[j]-b[j]);
                a[j] = a[j] - (a[j]-b[j]);
            }
            if(a[j]<b[j])
            {
                a[j+1] = a[j+1] - (b[j]-a[j]);
                a[j] = a[j] + (b[j]-a[j]);
            }
        }
        if(a[n-1]==b[n-1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
