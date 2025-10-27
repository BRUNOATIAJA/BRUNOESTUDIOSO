#include <iostream>
using namespace std;

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cin >> x >> y;
    intercambiar(&x, &y);
    cout << x << " " << y;
    return 0;
}
