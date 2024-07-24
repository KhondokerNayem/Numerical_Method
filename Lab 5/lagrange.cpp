#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the number of known data points : ";
    cin>>n;
    float x[50], y[50];
    for(i=1; i<=n; i++)
    {
        cout<<"Enter [x"<<i<<"] : ";
        cin>>x[i];
        cout<<"Enter [y"<<i<<"] : ";
        cin>>y[i];
    }
    float xP,yP;
    cout<<"Enter xP : ";
    cin>>xP;
    yP=0;

    for(i=1 ; i<=n; i++)
    {
        double pxP = 1;
        for(j=1; j<=n ; j++)
        {
            if(i!=j)
            {
              pxP = pxP * (xP - x[j])/(x[i]-x[j]);
              cout<<"pXP : "<<pxP<<endl;
            }
        }
        yP= yP + xP * y[i];
        cout<<"YP : "<<yP;
        cout<<endl;

    }
    //cout<<yP;


    return 0;
}
