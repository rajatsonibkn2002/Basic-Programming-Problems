// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/lift-queries/
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int a = 0, b = 7, N, i;
    long T;
    scanf("%ld", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d", &N);
        if(abs(b-N)<abs(N-a))
        {
            printf("B \n");
            b = N;
        }
        if(abs(b-N)>abs(N-a))
        {
            printf("A \n");
            a = N;
        }
        if(abs(b-N)==abs(N-a))
        {
            if(b<a)
            {
                b = N;
                printf("B \n");
            }
            
            if(b>a)
            {
                a = N;
                printf("A \n");
            }
        }
    }
    
}
