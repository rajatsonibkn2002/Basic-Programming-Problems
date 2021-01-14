// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int N, X, Y, i;
    scanf("%d", &N);
    scanf("%d", &X);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &Y);
        if(Y>=X)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
}
