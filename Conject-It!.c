// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/conject-it/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int T, i, m;
    unsigned long long int N;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%llu", &N);
        while(N>1)
        {
            m = N%2;
            if(m==0)
            {
                N = N/2;
            }
            if(m!=0)
            {
                N = (3*N) + 1;
            }
            
        }
        if(N==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
