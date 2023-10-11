#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S, P1, P2;
    int n, i1, i2;

    S = 0;
    n = 1;
    while (n <= 10) {
         P1 = 1;
         i1 = 1;
        while (i1 <= n) {
            P1 *= pow(i1, 2);
            i1++;
        }

         P2 = 1;
         i2 = n;
        while (i2 <= 10) {
            P2 *= pow(i2, 2);
            i2++;
        }

        S += (P1 + P2) / n;
        n++;
    }
    cout << S << endl;

    S = 0;
    n = 1;
    do {
         P1 = 1;
         i1 = 1;
        do {
            P1 *= pow(i1, 2);
            i1++;
        } while (i1 <= n);

         P2 = 1;
         i2 = n;
        do {
            P2 *= pow(i2, 2);
            i2++;
        } while (i2 <= 10);

        S += (P1 + P2) / n;
        n++;
    } while (n <= 10);
       cout << S << endl;

    S = 0;
    for (n=1;n<=10;n++)
    {
        P1 = 1;
        for (i1 = 1; i1 <= n; i1++) {
            P1 *= pow(i1, 2);
        }
        P2 = 1;
        for (i2 = n; i2 <= 10; i2++) {
            P2 *= pow(i2, 2);
        }
        S += (P1 + P2) / n;
    }
    cout << S << endl;

    return 0;
}






