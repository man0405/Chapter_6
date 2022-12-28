#include <iostream>

using namespace std;

int candy_parcel(int nsmall, int nbig, int order) {
    if (nsmall * 2 + nbig * 5 == order) {
        return nsmall;
    } else if (nsmall * 2 + nbig * 5 < order) {
        return -1;
    } else {
        return (order - nbig*5 )/ 2;
    }
    return 0;
}

int main() {
    int nsmall = 2;
    int nbig = 1;
    int order = 7;
    cout << candy_parcel(nsmall, nbig, order) << endl;
    return 0;
}
