// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author :  Rajat Soni
*/

#include <stdio.h>
#include<string.h>
void main()
{
    char s[202];
    gets(s);
    int x = 0, y = 0, l, i;
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i] == 76)
        {
            x = x-1;
        }
        if(s[i] == 82)
        {
            x = x+1;
        }
        if(s[i] == 85)
        {
            y = y+1;
        }
        if(s[i] == 68)
        {
            y = y-1;
        }
    }
    printf("%d %d", x, y);
    
}
