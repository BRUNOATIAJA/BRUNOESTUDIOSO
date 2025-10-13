#include <iostream>
#include <iomanip> // Para usar setprecision
using namespace std;

int main() {
    float radio, area;
    const float PI = 3.1416;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    area = PI * radio * radio;

    cout << fixed << setprecision(2); // Mostrar solo 2 decimales
    cout << "El área del círculo es: " << area << endl;

    return 0;
}
