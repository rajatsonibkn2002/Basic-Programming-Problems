//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int N, i, SH, SM, EH, EM, HH, MM;
    scanf("%d", &N);
    for(i=1; i<=N;i++)
    {
        scanf("%d %d %d %d", &SH, &SM, &EH, &EM);
        MM = (60-SM) + EM;
        if(MM>=60)
        {
            MM = MM-60;
            HH = EH-SH;
            printf("%d %d \n", HH, MM);
        }
        MM = (60-SM) + EM;
        if(MM<60)
        {
            HH = EH - (SH+1);
            printf("%d %d \n", HH, MM);
        }
        
        
    }
    
    
}
