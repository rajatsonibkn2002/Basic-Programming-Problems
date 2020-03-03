// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/?utm_source=header&utm_medium=search&utm_campaign=he-search
/* 
    Author : Rajat Soni
*/

#include <stdio.h>
#include<string.h>
void main()
{
    char S[200];
    int size, m, n, i, count = 0;
    gets(S);
    size = strlen(S);
    m = size/2;
    n = size%2;
    if(n!=0)
    {
        for(i=0; i<m; i++)
        {
            if(S[i] == S[size-i-1])
            {
                count++;
            }
        }
        if(count == ((size-1)/2))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    if(n ==0)
    {
        for(i=0; i<m; i++)
        {
            if(S[i] == S[size-i-1])
            {
                count++;
            }
        }
    
        if(count == (size/2))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}
