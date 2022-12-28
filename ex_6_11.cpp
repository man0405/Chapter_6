#include <iostream>
#include <math.h>
using namespace std;

void areaOfCircle(double *result, double radius)
{
    *result = radius * radius * M_PI;
}

int main()
{
    double radius;
    cin >> radius;
    double result;
    areaOfCircle(&result, radius);
    cout << result << endl;
}