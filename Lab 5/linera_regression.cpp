#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number of data points : ";
    cin>>n;
    float x[50], y[50];
    for(i=1; i<=n; i++)
    {
        cout<<"Enter [x"<<i<<"] : ";
        cin>>x[i];
        cout<<"Enter [y"<<i<<"] : ";
        cin>>y[i];
    }
    float sumX = 0,sumX2 = 0,sumY = 0,sumXY = 0;
    for(i=1; i<=n; i++)
    {
        sumX = sumX + x[i];
        sumX2 = sumX2+x[i]*x[i];
        sumY = sumY+y[i];
        sumXY = sumXY +x[i]*y[i];
    }
    float a,b,A,B;
    b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
    a = (sumY - b*sumX)/n;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b;

    return 0;
}
/*
4.6
479
4.8
831
5.2
739
5.4
840
5.6
809
5.8
1201
6
967
*/
