//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int length, pages;
    scanf("%d %d", &length, &pages);
    if(length<=23 && 500<pages<1000)
    {
        printf("Take Medicine");
    }
    else
    {
        printf("Don't take Medicine");
    }
}
