// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-savior-3/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    long long int t, n, i, j, count, sum, k;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        count = 0;
        scanf("%lld", &n);
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%lld", &a[j]);
        }
        for(j=0; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(a[j]!=a[k])
                {
                    sum = a[j]+a[k];
                    if((sum%2)==0)
                    {
                        count++;
                    }
                }
            }
        }
        printf("%lld\n", count);
    }
}
