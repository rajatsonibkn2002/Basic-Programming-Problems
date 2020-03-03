// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/min-max-3/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int n, i, min, max, j, count=0, c;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    for(i=min; i<=max; i++)
    {
        c=0;
        for(j=0; j<n && c==0; j++)
        {
            if(a[j]==i)
            {
                count++;
                c=1;
            }
        }
    }
    if(count == (max-min+1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
