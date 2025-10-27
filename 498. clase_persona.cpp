#include <iostream>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    void saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años.";
    }
};

int main() {
    Persona p;
    cin >> p.nombre >> p.edad;
    p.saludar();
    return 0;
}
