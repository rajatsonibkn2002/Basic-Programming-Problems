//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/
/*
    Author : Rajat Soni
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char s[1000];
    gets(s);
    int K, i, l;
    int a;
    scanf("%d", &K);
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            a = s[i] + K;
            while(a > 90)
            {
                a = a - 26;
            }
            s[i] = a;
        }
        if(s[i]>=97 && s[i]<=122)
        {
            a = s[i] +K;
            while(a>122)
            {
                a = a-26;
            }
            s[i] = a;
        }
        if(s[i]>=48 && s[i]<=57)
        {
            a = s[i] + K;
            while(a>57)
            {
                a = a-10;
            }
            s[i] = a;
        }
    }
    printf("%s", s);
}
