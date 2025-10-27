4. potencia_recursiva.cpp
#include <iostream>
using namespace std;

int potencia(int base, int exp) {
    if (exp == 0) return 1;
    return base * potencia(base, exp - 1);
}

int main() {
    int b, e;
    cin >> b >> e;
    cout << potencia(b, e);
    return 0;
}
