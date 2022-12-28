#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int ASC(int x)
{
    string digits = to_string(x);
    sort(digits.begin(), digits.end());
    return stoi(digits);
}

int DES(int x)
{
    string digits = to_string(x);
    sort(digits.rbegin(), digits.rend());
    return stoi(digits);
}

int main()
{
    cout << ASC(1421) << endl;
    cout << DES(1421) << endl;
    return 0;
}
