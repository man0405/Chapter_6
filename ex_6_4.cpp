#include <iostream>
using namespace std;

bool checkCondition(int n, int m){
    if (n < m) return true;
    return false;
}

int biggestNumber(int n, int m)
{
    int max = 0;
    int biggestNumber =0;
    for (int i = n; i <= m; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        if (max <= sum) {
            max = sum;
            biggestNumber = i;
        }
    }
    return biggestNumber;
}

int main()
{
    int n ,m ;
    cin >> n >> m;
    if ( checkCondition(n,m) ){ 
        cout << biggestNumber(n,m) << endl;
        return 0;
    }
    cout << "False condition" << endl;
    
}