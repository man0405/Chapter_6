#include <iostream>
using namespace std;

void theFactory(int *result, int n)
{
    while (n > 0)
    {
        *result *= n;
        n--;
    }
}

int main()
{
    int n;
    cin >> n;
    int result = 1;
    theFactory(&result, n);
    cout << result << endl;
}