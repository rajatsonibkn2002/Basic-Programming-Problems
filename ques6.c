// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ques-6/
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    long long int T, i, n, j, k, c;
    scanf("%lld", &T);
    for(i=0; i<T; i++)
    {
        scanf("%lld", &n);
        for(j=0; j<n; j++)
        {
            for(k=0; k<n-j-1; k++)
            {
                printf(" ");
            }
            if(j==0)
            {
                c=1;
            }
            for(k=0; k<c; k++)
            {
                printf("*");
            }
            c = c+2;
            printf("\n");
        }
        printf("\n");
    }
}
