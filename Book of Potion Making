//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int digit, i, num, sum, count = 0;
    long n;
    scanf("%ld", &n);
    num = n;
    while(n!=0)
    {
        count = count +1;
        n = n/10;
    }
    if(count!=10)
    {
        printf("Illegal ISBN");    
    }
    if(count==10)
    {
        for(i=10; i>=1; i--)
        {
            digit = num%10;
            sum = sum + (digit*i);
            num = num/10;
        }
        if((sum%11)==0)
        {
            printf("Legal ISBN \n");
        }
        else
        {
            printf("Illegal ISBN \n");
        }
        
    }
}
