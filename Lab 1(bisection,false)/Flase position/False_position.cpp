#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define e 0.00001

double f(double x)
{
    return x*x*x + x*x + x + 7;
}
void false_position(double x0,double x1)
{
    double x2=0,num=0;
    if(f(x1)*f(x0)>0)
    {
        cout<<"Invalid input";
    }
    do
    {
        x2 = x0-((x0-x1)*f(x0))/(f(x0)-f(x1));
        if(f(x2)*f(x0)<0)
        {
            x1=x2;
        }
        else
        {
            x0=x2;
        }
        cout<<"Iteration : "<<num<<endl;
        cout<<"Lower limit : "<<x0<<endl;
        cout<<"upper limit : "<<x1<<endl;
        cout<<"F(Lower_limit) : "<<f(x0)<<endl;
        cout<<"F(Upper_limit) : "<<f(x2)<<endl;
        cout<<"Root : "<<x2<<endl;
        cout<<"F(Root) : "<<f(x2)<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        num++;
    }
    while(abs(f(x2))>e);
    cout<<"Root = "<<x2;
}

int main()
{
    double lower_Limit, upper_Limit;
    cout<<"Enter lower limit : ";
    cin>>lower_Limit;
    cout<<"Enter Upper limit : ";
    cin>>upper_Limit;
    cout<<endl;
    cout<<endl;
    false_position(lower_Limit,upper_Limit);
    return 0;
}

