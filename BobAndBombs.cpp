// Problem Link :- https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bob-and-bombs-cake-walk/
/*
  Author : Rajat Soni
*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t, count, n, i, j;
    cin>>t;
    for(i=0; i<t; i++)
    {
        count = 0;
        char s[100000];
        cin>>s;
        n = strlen(s);
        for(j=0; j<n; j++)
        {
            if(s[j]=='B')
            {
                if(s[j-1]=='W' && (j-1)>=0)
                {
                    count++;
                    s[j-1] = '!';
                }
                if(s[j-2]=='W' && (j-2)>=0)
                {
                    count++;
                    s[j-2] = '!';
                }
                if(s[j+1]=='W' && (j+1)<n)
                {
                    count++;
                    s[j+1] = '!';
                }
                if(s[j+2]=='W' && (j+2)<n)
                {
                    count++;
                    s[j+2] = '!';
                }
            }
        }
        cout<<count<<"\n";
    }
}
