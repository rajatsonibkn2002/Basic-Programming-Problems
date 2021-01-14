// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int T, i, j, m, n, o, N;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d", &N);
        for(j=1; j<=N; j++)
        {
            for(m=1; m<=j; m++)
            {
                printf("*");
            }
            for(n=1; n<=((2*N)-(2*j)); n++)
            {
                printf("#");
            }
            for(o=1; o<=j; o++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
