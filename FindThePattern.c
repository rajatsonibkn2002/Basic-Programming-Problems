// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-the-pattern-6/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    long long int n, sum, min, max, i;
    scanf("%lld", &n);
    long long int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    min = a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    max = a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    sum = min + max;
    printf("%lld", sum);
}
