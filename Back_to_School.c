//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/back-to-school-1/?utm_source=header&utm_medium=search&utm_campaign=he-search
/* 
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int large, i, A[3];
    for(i=0; i<3; i++)
    {
        scanf("%d", &A[i]);
    }
    large = A[0];
    for(i=0;i<3;i++)
    {
        if(A[i]>large)
        {
            large = A[i];
        }
    }
    printf("%d", large);

}
