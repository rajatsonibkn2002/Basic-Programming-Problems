// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-great-kian/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    long long int n, i, s1=0, s2=0, s3=0;
    scanf("%lld", &n);
    long long int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=0; i<n; i=i+3)
    {
        s1 = s1+a[i];
    }
    for(i=1; i<n; i=i+3)
    {
        s2 = s2+a[i];
    }
    for(i=2; i<n; i=i+3)
    {
        s3 = s3+a[i];
    }
    printf("%lld %lld %lld", s1, s2, s3);
}
