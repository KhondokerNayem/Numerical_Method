#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    float a[50][50],x[50],tempe;
    ///input
    cout << "Enter number of unknows : ";
    cin >> n;
    cout << endl;
    ///input
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n+1; j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"] : ";
            cin>>a[i][j];
        }

    }
    ///seidel
    for(i=1; i<=n; i++)
    {
        x[i]=0;
    }
    do
    {
        tempe =0;
        for(i=1; i<=n; i++)
        {
            float sum =0;
            for(int j=1; j<=n; j++)
            {
                if(i!=j)
                {
                    sum =sum + a[i][j]*x[j];
                }
            }
            float temp = (a[i][n+1]-sum)/a[i][i];
            float error = fabs(x[i]-temp);
            if(error>tempe)
            {
                tempe=error;
            }
            x[i]=temp;
        }
    }
    while (tempe >=0.00001);
    ///print
    cout<<endl<<endl<<"Result : "<<endl<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"x["<<i<<"] : "<<x[i]<<endl;
    }
    return 0;
}
