// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/digit-problem/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    long long int X, K, n=1, nd=1, c=10, dc, dd, d[100], nn, j=0, i=1;
    scanf("%lld %lld", &X, &K);
    dc = X/c;
    while(dc!=0)
    {
        n++;
        c = c*10;
        dc = X/c;
    }
    c = 10;
    nn = n-1;
    dd = X%c;
    d[nn] = dd;
    while(nn!=0)
    {
        X = X/c;
        dd = X%c;
        nn= nn-1;
        d[nn] = dd;
    }
    while(i!=K+1)
    {
        if(d[j]!=9)
        {
            d[j] = 9;
            i++;
        }
        j++;
    }
    for(i=0; i<n; i++)
    {
        printf("%lld", d[i]);    
    }
    
}
