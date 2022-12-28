#include <iostream>
#include <math.h>
using namespace std;

int digitNumber(int n){
    return (int)log10(n) + 1;
}

int  primeFactorial(int n){
    int result =0;
    for ( int i = 2 ; i <= sqrt(n) ; i++ ){
        if ( n % i == 0 ){
            int count = 0;
            while (n % i ==0)
            {
                ++ count;
                n /= i;
            }
            // printf( "%d^%d", i, count);
            if ( count != 1){
                result += digitNumber (i) + digitNumber(count);
            } else {
                result += digitNumber (i);
            }

            // if ( n != 1){
            //     cout << "*";
            // }
            
        }
    }
    if ( n != 1){
        // cout << n;
        result += digitNumber (n);
    }
    return result;
}

int economicalNumber(int n , int m){
    if ( n == m ) return 1;
    if ( n > m ) return 2;
    return 3;
}


int main(){
    int n ;
    cin >> n;
    cout << economicalNumber(digitNumber(n), primeFactorial(n)) << endl;
}