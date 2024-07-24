#include<bits/stdc++.h>
using namespace std;
#define e 0.00001
double f(double x)
{
    return x*x-x-1;
}
//covergent form g(x)
double g(double x)
{
    return 1/(x-1);
}
void fixed_point(double x0, double n)
{
    double x1,step=1;
    do
    {
        x1 = g(x0);
        step++;
        if(step >  n)
        {
            break;
        }
        else
        {
            x0=x1;
        }
    }while (fabs(f(x1))>e);

    cout<<"Root : "<<x1;

}
int main()
{
    double initial,iteration;
    cout<<"Enter Initial Guess : ";
    cin>>initial;
    cout<<"Enter Maximum iteration : ";
    cin>>iteration;
    fixed_point(initial,iteration);
    return 0;
}
