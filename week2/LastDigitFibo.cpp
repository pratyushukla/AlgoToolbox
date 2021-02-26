#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n) {
    vector<long long> fibonacci(n + 1);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i <= n; i++) {
        fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 10;
    }
    return fibonacci[n]; 
}

int main(void) {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}