// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/golf/jadoo-hates-maths/
/*
  Author : Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    int n, k, m=1;
    cin>>n;
    while(m==1)
    {
        if(++n%3!=0)
        {
            k = n;
            m = 0;
            while(k!=0 && m==0)
            {
                if(k%10!=3)
                    k = k/10;
                else
                    m = 1;
            }
        }
    }
    cout<<n;
}
