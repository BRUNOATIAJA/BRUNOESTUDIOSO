#include <iostream>
using namespace std;

double promedio(int arr[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma / n;
}

int main() {
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << promedio(arr, n);
    return 0;
}
