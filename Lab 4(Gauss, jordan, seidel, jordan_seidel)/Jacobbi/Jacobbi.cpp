#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    float a[50][50],x[50],temp,arr[50];
    ///input
    cout << "Enter numbers of unknown : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n+1; j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    ///jacobbi
    for(i=1; i<=n; i++)
    {
        x[i]=0;
    }
    do
    {
        temp =0;
        for(i=1; i<=n; i++)
        {
            float sum =0;
            for(j=1; j<=n; j++)
            {
                if(i!=j)
                {
                    sum =sum + a[i][j] * x[j];
                }
            }
            arr[i] = (a[i][n+1]-sum)/a[i][i];
            float error = fabs(x[i]-arr[i]);
            if(error>temp)
            {
                temp=error;
            }
        }
        for(i=1; i<=n; i++)
        {
            x[i]=arr[i];
        }
    }
    while (temp >=0.00001);
    ///print
    cout<<endl<<endl<<"Result : "<<endl<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"x["<<i<<"] : "<<x[i]<<endl;
    }


    return 0;
}
