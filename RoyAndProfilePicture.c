// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int i, L, N, W, H;
    scanf("%d", &L);
    scanf("%d", &N);
    for(i = 1; i<=N; i++)
    {
        scanf("%d %d", &W, &H);
        if(W<L || H<L)
        printf("UPLOAD ANOTHER \n");
        if(W>=L && H>=L)
            {
                if(W==H)
                printf("ACCEPTED \n");
                if(W!=H)
                printf("CROP IT \n");
            }
    }
    
}
