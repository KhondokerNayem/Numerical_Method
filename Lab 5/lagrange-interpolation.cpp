#include<bits/stdc++.h>
using namespace std;

struct Data       //f(x) = y;
{
    int x, y;
};
double interpolate(Data f[], int xi, int n)    // xi new data point jeta ber korte hobe // no of known data points
{
    double result = 0;         // Initialize result

    for (int i=0; i<n; i++)
    {
        double term = f[i].y;
        for (int j=0;j<n;j++)
        {
            if (j!=i)
                term = term*(xi - f[j].x)/double(f[i].x - f[j].x);
        }

          result += term;        // result ta term er sathe add korbo
    }
          return result;
}

   int main()
{
   Data f[] = {{0,2}, {1,3}, {2,12}, {5,147}};  // given data
   cout << "Value of f(3) is : " << interpolate(f, 3, 5);
   return 0;
}

