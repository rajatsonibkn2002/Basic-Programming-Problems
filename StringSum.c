// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-sum/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char s[1000];
    long long int l, sum=0, i;
    scanf("%s", &s);
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        sum = sum + s[i] - 96;    
    }
    printf("%lld", sum);   
}
