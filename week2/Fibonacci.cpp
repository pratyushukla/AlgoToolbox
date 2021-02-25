#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n; //Number of Fibonacci numbers to be printed
    vector <int> array(n);
    for (int i = 0; i < n; i++) {
        array[i] = 0;
    }
    array[1] = 1;
    printf("\n");
    printf("\t\t--------------Fibonacci Numbers--------------\n");
    printf("1st Fibonacci number = 0\n");
    printf("2nd Fibonacci number = 1\n");
    for (int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
        printf("%dth Fibonacci number = %d\n", i, array[i]);
    }
    return 0;
}