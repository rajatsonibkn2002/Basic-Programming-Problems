//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    long long int N;
    scanf("%lld", &N);
    long long int i, num, final, A[N], F[N]; 
    for(i=0; i<N; i++)
    {
        scanf("%lld", &A[i]);
    }
    for(i=0; i<N; i++)
    {
        num = A[i];
        while(num/10 != 0)
        {
            num = num%10;
        }
        F[i] = num; 
    }
    if(F[N-1] == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
  
}
