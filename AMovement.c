//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/a-movement-1/?utm_source=header&utm_medium=search&utm_campaign=he-search
/* 
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int n, i, stp =0;
    scanf("%d", &n);
    for(i=5; i>=1; i--)
    {
        while(n>=i)
        {
            stp = stp + (n/i);
            n = n%i;
        }
        
    }
    printf("%d", stp);
}
