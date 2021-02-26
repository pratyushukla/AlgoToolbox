#include <iostream>
#include <vector>
using namespace std;

long long int gcd(int x, int y) {
    if (y == 0)
        return x;
    else return gcd(y, x % y);
}

int main(void) {
    long long int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}