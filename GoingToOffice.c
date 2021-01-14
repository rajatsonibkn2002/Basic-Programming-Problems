// Problem Link : https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
    Author : Rajat Soni
*/

#include <stdio.h>
void main()
{
    double D, Oc, Of, Od, Cb, Cm, Cd, Cs, costonline, costclassic;
    double minute, cost;
    scanf("%lf", &D);
    scanf("%lf %lf %lf", &Oc, &Of, &Od);
    scanf("%lf %lf %lf %lf", &Cs, &Cb, &Cm, &Cd );
    costonline = Oc + ((D - Of)*(Od));
    minute = D/Cs;
    cost = (minute * Cm); 
    costclassic = Cb + (Cd * D) + cost;
    if(costonline > costclassic)
    {
        printf("Classic Taxi");
    }
    if(costonline < costclassic)
    {
        printf("Online Taxi");
    }
    if(costonline == costclassic)
    {
        printf("Online Taxi");
    }
}
