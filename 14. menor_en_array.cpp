#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de números: ";
    cin >> n;
    int x, menor;
    cin >> menor;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < menor) menor = x;
    }
    cout << "El menor es: " << menor;
    return 0;
}
