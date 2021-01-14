// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/teddy-and-tweety/?utm_source=header&utm_medium=search&utm_campaign=he-search
/* 
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int N, m;
    scanf("%d", &N);
    m = N%3;
    if(m == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
