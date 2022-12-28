#include <iostream>
#include <math.h>
using namespace std;

const int MAX_PRIME = 1000;
int primeFactors[MAX_PRIME];
int primeFactorCount[MAX_PRIME];
int primeCount; // Declare primeCount as a global variable

int digitNumber(int n){
    return (int)log10(n) + 1;
}

void findPrimeFactors(int n){
    primeCount = 0; // Initialize primeCount
    for (int i = 2; i <= n / i; i++){
        if (n % i == 0){
            primeFactors[primeCount] = i;
            primeFactorCount[primeCount] = 0;
            while (n % i == 0){
                n /= i;
                primeFactorCount[primeCount]++;
            }
            primeCount++;
        }
    }
    if (n > 1){
        primeFactors[primeCount] = n;
        primeFactorCount[primeCount] = 1;
        primeCount++;
    }
}

int primeFactorial(int n){
    findPrimeFactors(n);
    int result = 0;
    for (int i = 0; i < primeCount; i++){
        if (primeFactorCount[i] != 1){
            result += digitNumber(primeFactors[i]) + digitNumber(primeFactorCount[i]);
        } else {
            result += digitNumber(primeFactors[i]);
        }
    }
    return result;
}

int economicalNumber(int n , int m){
    if ( n == m ) return 1;
    if ( n > m ) return 2;
    return 3;
}

int main(){
    int n;
    cin >> n;
    cout << economicalNumber(digitNumber(n), primeFactorial(n)) << endl;
}
