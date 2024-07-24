#include<bits/stdc++.h>
using namespace std;
#define e 0.00001
double A[100];
double maxroot(int degree)
{
    double maxr;
    maxr = sqrt((pow((A[degree-1]/A[degree]),2))-2*(A[degree-2]/A[degree]));
    return maxr;
}
double f(double root, int deg)
{
    double B[deg+1];
    B[deg]=A[deg];
    while(deg>0)
    {
        B[deg-1] = A[deg-1]+B[deg]*root;
        deg--;
    }
    return B[deg];
}
void bisection(double a, double b, int n)
{
    double dx=0.1;
    double xr,x1,x2,rel_e;
    x1=a;
    x2=a+dx;
    while(x2<b)
    {
        x1=a;
        x2=x1+dx;
        if(f(x1,n)* f(x2,n)>0)
        {
            if(x2<b)
            {
                a=x2;
            }
        }
        else
        {

            do
            {
                xr = (x1+x2)/2;
                if(f(xr,n)*f(x1,n)<0)
                {
                    x2=xr;
                }
                else
                {
                    x1=xr;
                }
                rel_e = (x2 - x1) / x2;
            }
            while(fabs(rel_e) > e);
            cout<<"Root : "<<xr<<endl;
        }
        a=x2;
    }
}

int main()
{
    cout<<fixed<<setprecision(6);
    int n,i;
    double a,b;
    cout<<"Enter the number of degree : ";
    cin>>n;
    cout<<"Enter the values of co-efficient : "<<endl;
    for(i=n; i>=0; i--)
    {
        cout<<"Co-efficient of x["<<i<<"] = ";
        cin >> A[i];
    }
    b= maxroot(n);
    a= -1*b;
    cout<<"Interval : "<<a<<" to "<<b<<endl;
    bisection(a,b,n);

    return 0;
}
