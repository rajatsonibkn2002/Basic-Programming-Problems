//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    int T, g, p, n, f, s, i, j,fc, sc, l, m;
    scanf("%d\n", &T);
    for(m=1;m<=T;m++)
    {
        f=0;
        s=0;
        scanf("%d %d\n", &g, &p);
        scanf("%d\n", &n);
        for(l=1;l<=n;l++)
        {
            scanf("%d %d", &i, &j);
            if(i==1)
            {
                f++;    
            }
            if(j==1)
            {
                s++;
            }
        }
        fc = (f*g) + (s*p);
        sc = (f*p) + (s*g);
        if(fc>sc)
        {
            printf("%d\n", sc);
        }
        else
        {
            printf("%d\n", fc);
        }    
    }   
    
}
