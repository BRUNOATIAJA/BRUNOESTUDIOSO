
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char origen[100], destino[100];
    cin.getline(origen, 100);
    char* p = origen;
    char* q = destino;
    while (*p != '\0') {
        *q = *p;
        p++; q++;
    }
    *q = '\0';
    cout << "Copia: " << destino;
    return 0;}
