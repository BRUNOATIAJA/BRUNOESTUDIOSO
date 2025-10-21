. Verificar si un número es negativo – ejercicio12.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0)
        cout << "Negativo";
    else
        cout << "No negativo";
    return 0;
}
