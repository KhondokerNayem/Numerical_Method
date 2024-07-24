#include<bits/stdc++.h>
using namespace std;
#define e 0.000001
double f(double x)
{
    return 3*x*x*x - x - 1;
}
double d_f(double x)
{
    return 9*x*x-1;
}
void Newtop_rapson(double x0)
{
    double x1,iteration_count=1;
    cout<<"\n\t-------------------------------------------------------------------------";
    cout<<"\n\tIteration\t   f(x)\t\t\t  f'(x)\t\t\t  Root";
    cout<<"\n\t-------------------------------------------------------------------------\n";
    do
    {
        if(d_f(x0)==0)
        {
            cout<<"Mathematical Error";
            break;
        }
        else
        {
            x1=x0-f(x0)/d_f(x0);
            printf("\t   %.0lf\t\t\%lf\t\t%lf\t\t%lf",iteration_count,f(x0),f(x1),x1);
            cout<<endl;
            cout<<"\n\t-------------------------------------------------------------------------\n";
            x0=x1;
            iteration_count++;
        }
    }
    while(f(x1)>e);
    cout<<endl;
    cout<<"\tFinal Root : "<<x1;cout<<endl;

}
int main()
{
    double initial_value;
    cout<<"Enter initial Guess : ";
    cin>>initial_value;
    Newtop_rapson(initial_value);
    return 0;
}
