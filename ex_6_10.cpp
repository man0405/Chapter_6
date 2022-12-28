#include <iostream>
#include <math.h>

using namespace std;

bool polydivisibleNumber(int n)
{
    int digit = (int)log10(n) + 1;
    bool result = false;
    for (int i = 2; i <= digit; i++)
    {
        if ((int)((n / pow(10, digit - i))) % i == 0)
        {
            result = true;
        }
        else
        {
            return false;
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    if (polydivisibleNumber(n))
    {
        cout << n << " is polydivisible number" << endl;
    }
    else
    {
        cout << n << " is not Polydivisible number" << endl;
    }
}