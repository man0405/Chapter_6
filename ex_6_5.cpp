#include <iostream>
#include <math.h>
using namespace std;

double derivative(double x, double y) {
    return y*(pow(x,y-1));
}

int main(){
    double x, y;
    cin >> x >> y;
    cout << derivative(x, y) << endl;
}