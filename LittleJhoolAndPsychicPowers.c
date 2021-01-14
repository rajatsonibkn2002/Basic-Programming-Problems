// Problem Link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    char s[100];
    int l, c0=0, c1=0, m, i;
    scanf("%s", &s);
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]!=48)
        {   
             c0 = 0;
        }
        if(s[i]!=49)
        {
            c1 = 0;
        }
        if(s[i] == 48)
        {
            c0++;
        }
        if(s[i] == 49)
        {
            c1++;
        }
        if(c0==6 || c1 ==6)
        {
            printf("Sorry, sorry!");
            exit(0);
        }
    }
    printf("Good luck!");
}
