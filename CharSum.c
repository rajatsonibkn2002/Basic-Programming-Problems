//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int a, sum=0, i, j, b, l;
    gets(s);
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        a = s[i];
        for(j=97; j<=122; j++)
        {
            if(a==j)
            {
                a = a-96;
            }
        }
        sum = sum + a;
    }
    printf("%d", sum);
 
}
