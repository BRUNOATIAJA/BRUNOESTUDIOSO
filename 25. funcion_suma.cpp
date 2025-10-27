#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Suma = " << suma(x, y);
    return 0;
}
