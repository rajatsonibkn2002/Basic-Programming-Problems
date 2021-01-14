// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ques-2/
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int n, x, y, i, c=0;
    scanf("%d %d %d", &n, &x, &y);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>=x && a[i]<=y)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}
