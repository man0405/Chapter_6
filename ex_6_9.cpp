#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int x)
{
    if (x < 2)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(x); i += 2)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int result = 1;
    int n;
    cin >> n;
    int count = 0;
    int current = 2;

    while (count < n)
    {
        if (is_prime(current))
        {
            result *= current;
            count++;
        }
        current++;
    }
    cout << result << endl;
}