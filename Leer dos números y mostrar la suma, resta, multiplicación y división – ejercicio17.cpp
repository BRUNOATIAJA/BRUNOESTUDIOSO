#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicación: " << a * b << endl;
    if (b != 0)
        cout << "División: " << (float)a / b << endl;
    else
        cout << "División: Error (división por cero)";
    return 0;
}
