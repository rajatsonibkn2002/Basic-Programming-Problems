// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/binary-associativity-fc8ca73f/
/*
  Author : Rajat Soni
*/

#include <iostream>
using namespace std;
int mult(int x, int y, int c0, int c1, int c2, int c3)
{
    if(x==0&&y==0)
        return c0;
    else if(x==0&y==1)
        return c1;
    else if(x==1&y==0)
        return c2;
    else
        return c3;
}
int main()
{
    int t, i, c0, c1, c2, c3, l, l1, r1, r, k;
    cin>>t;
    for(i=0; i<t; i++)
    {
        k=0;
        cin>>c0>>c1>>c2>>c3;
        for(int x=0; x<=1&&k==0; x++)
        {
            for(int y=0; y<=1&&k==0; y++)
            {
                for(int z=0; z<=1&&k==0; z++)
                {
                    l1 = mult(x, y, c0, c1, c2, c3);
                    l = mult(l1, z, c0, c1, c2, c3);
                    r1 = mult(y, z, c0, c1, c2, c3);
                    r = mult(x, r1, c0, c1, c2, c3);
                    if(r!=l)
                    {
                        cout<<"No\n";
                        k=1;
                    }
                }
            }
        }
        if(k==0)
            cout<<"Yes\n";
    }
    return 0;
}
