//Problem Link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/a-new-experiment/description/
/*
  Author: Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    int t, n, i, out;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        out=1;
        if((n%2)==0)
        {
            while(n!=1)
            {
                n = n/2;
                if(n%2!=0 && n>1)
                {
                    out++;
                    n--;
                }
            }
        }
        else
        {
            n--;
            while(n!=1)
            {
                n = n/2;
                if(n%2!=0 && n>1)
                {
                    out++;
                    n--;
                }
            }
            out++;
        }
        cout<<out<<endl;
    }
}
