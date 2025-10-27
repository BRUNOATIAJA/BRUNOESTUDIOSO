#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres números: ";
    cin >> a >> b >> c;
    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    cout << "Mayor = " << mayor;
    return 0;
}
