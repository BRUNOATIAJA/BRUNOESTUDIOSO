#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int arr[100], suma = 0;
    for (int i = 0; i < n; i++) cin >> arr[i], suma += arr[i];
    cout << "Suma total = " << suma;
    return 0;
}
