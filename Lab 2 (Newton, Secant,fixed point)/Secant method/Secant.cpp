#include<bits/stdc++.h>
using namespace std;
#define e 0.000001
double f(double x)
{
    return 3*x*x*x - x - 1;
}
void secant(double x0, double x1)
{
    double x2;
    do
    {
        x2= x1 - (x1-x0) * f(x1)/(f(x1)*f(x0));
        x0=x1;
        x1=x2;
    }while(((x2-x1)/x2)>e);

    cout<<endl;
    cout<<"Root : "<<x2;
    cout<<endl;
}
int main()
{
    double upper_limit,lower_limit;
    cout<<"Enter Guess (Lower limit) :";
    cin>>lower_limit;
    cout<<"Enter Guess (Upper limit) :";
    cin>>upper_limit;
    secant(lower_limit,upper_limit);

    return 0;
}
