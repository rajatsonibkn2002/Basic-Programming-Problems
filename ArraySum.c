//Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-sum-2-725368ac/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    long long int n, i, sum=0;
    scanf("%lld", &n);
    long long int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
        sum = sum + a[i];
    }
    printf("%lld", sum);
}
