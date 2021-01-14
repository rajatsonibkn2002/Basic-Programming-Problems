// Problem Link :- https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-reversed-numbers/
/*
  Author : Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    int t, i, a, b, sa, sb;
    cin>>t;
    for(i=0; i<t; i++)
    {
        sa=0; sb=0;
        cin>>a>>b;
        while(a!=0)
        {
            sa = (10*sa) + (a%10);
            a = a/10;
        }
        while(b!=0)
        {
            sb = (10*sb) + (b%10);
            b = b/10;
        }
        sa = sa+sb;
        sb = 0;
        while(sa!=0)
        {
            sb = (10*sb) + (sa%10);
            sa = sa/10;
        }
        cout<<sb<<"\n";
    }
    return 0;
}
