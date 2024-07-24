#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(4);
    float a[50][50], x[50], value;
    int i,j,k,n;
    ///input
    cout<<"Enter number of unknowns: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    ///Gauss Elimination
    for(i=1; i<=n-1; i++)
    {
        if(a[i][i]==0)
        {
            break;
        }
        for(j=i+1; j<=n; j++)
        {
            value = a[j][i]/a[i][i];

            for(k=1; k<=n+1; k++)
            {
                a[j][k] = a[j][k] - value*a[i][k];
            }
        }
    }

    x[n] = a[n][n+1] /a [n][n];

    for(i=n-1; i>=1; i--)
    {
        x[i] = a[i][n+1];
        for(j=i+1; j<=n; j++)
        {
            x[i] = x[i] - a[i][j]*x[j];
        }
        x[i] = x[i]/a[i][i];
    }
    ///print
    cout<<endl<<endl<<"Result : "<<endl<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"x["<<i<<"] : "<<x[i]<<endl;
    }
    return 0;
}
