#include<bits/stdc++.h>
using namespace std;
int n;
float horners(float coeff[],  float x)
{
    float b = 0;
    for(int i=0; i<=n; i++)
    {
        b = b*x + coeff[i];
    }
    return b;
}
float df(float poly[],  float x)
{
    float value = 0;
    for(int i=0; i<n; i++)
    {
        value = value*x + (n-i)*poly[i];
    }
    return value;
}
int main()
{
    int  i;
    float x, x1;
    float  coeff[n], q[n];
    float e;
    int step = 0;
    printf("Enter the degree of the equation: ");
    scanf("%d",&n);
    printf("\n Enter values of coefficients: ");
    for(i=0; i<=n; i++)
    {
        scanf("%f",&coeff[i]);
    }
    printf("\nEnter the initial X:");
    scanf("%f", &x);
    while(n>1)
    {
        int i, k=1;
        do
        {
            do
            {
                x1 = x - (horners(coeff, x)/df(coeff, x));
                e = fabs(x1-x);
                x = x1;
                step++;
                if(step > 100)
                {
                    printf("Not Convergent.");
                    break;
                }
            }
            while(e > 0.001);
            printf("\n iter %d  Root %d: %f ",4-n, k, x);
            q[0] = coeff[0];
            for(i=1; i<=n; i++)
            {
                q[i] = (q[i-1]*x)+coeff[i];
            }
            n = n-1;
            for(i=0; i<=n; i++)
            {
                coeff[i] = q[i];
            }
            k++;
        }
        while(n>0);
    }
    return 0;
}

