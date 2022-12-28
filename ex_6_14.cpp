#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
float add(float x, float y) { return x + y; }
double add(double x, double y) { return x + y; }

int main()
{
    int x = 10, y = 10;
    float a = 12.65, b = 116.50;
    double m = 1234.567, n = 2468.357;

    cout << "Sum Int :" << add(x, y) << endl;
    cout << "Sum Float :" << add(a, b) << endl;
    cout << "Sum Double :" << add(m, n) << endl;
}