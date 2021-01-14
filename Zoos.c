// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
/*
    Author : Rajat Soni
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char input[20];
    int i, l, x=0, y=0;
    gets(input);
    l = strlen(input);
    for(i=0;i<l;i++)
    {
        if(input[i]==122)
        {
            x++;
        }
        if(input[i]==111)
        {
            y++;
        }
    }
    if((2*x)==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
