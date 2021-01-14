// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int n;
    while(2)
    {
        scanf("%d", &n);
        if(n!=42)
        {
            printf("%d \n", n);
        }
        if(n==42)
        {
            break;
        }
    }
}
