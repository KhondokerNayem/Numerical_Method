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
        sumX = sumX + log(x[i]);
        sumX2 = sumX2+log(x[i])*log(x[i]);
        sumY = sumY+log(y[i]);
        sumXY = sumXY +log(x[i])*log(y[i]);
    }
    float a,b,A,B;
    b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);

    A = (sumY - b*sumX)/n;

    a = exp(A);
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b;

    return 0;
}
/*
 8
Enter [x1] : 1
Enter [y1] : 1
Enter [x2] : 3
Enter [y2] : 2
Enter [x3] : 4
Enter [y3] : 4
Enter [x4] : 6
Enter [y4] : 4
Enter [x5] : 8
Enter [y5] : 5
Enter [x6] : 9
Enter [y6] : 7
Enter [x7] : 11
Enter [y7] : 8
Enter [x8] : 14
Enter [y8] : 9
Value of a : 2.35395
Value of b : 4.21385

*/
