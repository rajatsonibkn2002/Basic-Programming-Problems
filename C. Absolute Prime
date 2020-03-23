// Problem Link :- https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/c-absolute-prime/
/*
  Author : Rajat Soni
*/

#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int n)
{
    for(int i=2; i<=sqrt(n); ++i)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int t, n, k, sum;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        while(1)
        {
            k=n-1;
            sum=0;
            while(k!=0)
            {
                sum = sum+(k%10);
                k = k/10;
            }
            if(isPrime(sum)==1)
            {
                if(isPrime(n-1)==1)
                {
                    cout<<n-1<<endl;
                    break;
                }
            }
            n--;
        }
    }
}
