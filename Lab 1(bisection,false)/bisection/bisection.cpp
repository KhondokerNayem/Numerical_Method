#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define e 0.00001

double func_tion(double x)
{
    return x*x*x + x*x + x + 7;
}
void bisection(double lower_limit,double upper_limit)
{
    double root=0;
    int num=1;
    if(func_tion(lower_limit)*func_tion(upper_limit)>0)
    {
        cout<<"Invalid input";
    }
    else
    {
        root=(upper_limit+lower_limit)/2;
        while(abs(func_tion(root))>e)
        {

            root=(upper_limit+lower_limit)/2;

            if(func_tion(lower_limit)*func_tion(root)< 0)
            {
                upper_limit=root;
            }
            else
            {
                lower_limit=root;
            }
            ///normal print
            cout<<"Iteration : "<<num<<endl;
            cout<<"Lower limit : "<<lower_limit<<endl;
            cout<<"upper limit : "<<upper_limit<<endl;
            cout<<"F(Lower_limit) : "<<func_tion(lower_limit)<<endl;
            cout<<"F(Upper_limit) : "<<func_tion(upper_limit)<<endl;
            cout<<"Root : "<<root<<endl;
            cout<<"F(Root) : "<<func_tion(root)<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            num++;

            ///table print
            /*if(nayem==0)
            {


            cout<<"Iteration"<<"Lower Limit"<<"upper limit"<<"F(Lower_limit)"<<"F(Upper_limit)"<<"Root  "<<"F(Root)"<<endl;
            nayem++;
            }
            cout<<num<<lower_limit<<upper_limit<<func_tion(lower_limit<<func_tion(upper_limit)<<root<<func_tion(root)<<endl;*/
        }
    }
    cout<<endl;
    cout<<"Final Root : "<<root;
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
    bisection(lower_Limit,upper_Limit);
    return 0;
}
