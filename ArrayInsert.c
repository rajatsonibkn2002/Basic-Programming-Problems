//Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-insert/?utm_source=header&utm_medium=search&utm_campaign=he-search
/* 
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    long long int n, q, i, j, sum, k;
    scanf("%lld %lld", &n, &q);
    long long int a[n], qa[3];
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=0; i<q; i++)
    {
        sum=0;
        for(j=0; j<3; j++)
        {
            scanf("%lld", &qa[j]);
        }
        if(qa[0]==1)
        {
            a[qa[1]] = qa[2]; 
        }
        if(qa[0]==2)
        {
            if(qa[1]<0 || qa[1]>n-1 || qa[2]>n-1)
            {
                printf("-1\n");
            }
            else
            {   
                for(k=qa[1]; k<=qa[2]; k++)
                {
                    sum = sum + a[k];
                }
                printf("%lld\n", sum);
            }
        }
    }
}
