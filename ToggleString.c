// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char A[102];
    int l, i;
    gets(A);
    l = strlen(A);
    for(i=0; i<l; i++)
    {
        if(A[i]>=97 && A[i]<=122)
        {
            A[i] = A[i] - 32;
            continue;
        }
        if(A[i]<=90 && A[i]>=65)
        {
            A[i] = A[i] + 32;
        }
    }
    printf("%s", A);
    
    
}
