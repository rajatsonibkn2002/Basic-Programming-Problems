// Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
#include <string.h>
void main()
{
    int T, l1, l2, t, i, j, c, count;
    scanf("%d", &T);
    char S1[100000], S2[100000];
    for(t=1; t<=T; t++)
    {
        count = 0;
        scanf("%s %s", &S1, &S2);
        l1 = strlen(S1);
        l2 = strlen(S2);
       
        for(i=0; i<l1; i++)
        {
            c=0;
            for(j=0; j<l2 && c==0; j++)   //ambuj jumba
            {
                if(S1[i] == S2[j])
                {
                    c=1;
                    S2[j] = " ";
                    count ++;
                }
            }
            if(c==0)
            {
                printf("NO\n");
                break;
            }
        }
        if(count == l1)
        {
            printf("YES\n");
        }
    }
}
