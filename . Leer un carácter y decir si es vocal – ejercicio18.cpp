#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        cout << "Es vocal";
    else
        cout << "No es vocal";
    return 0;
}
✅ 19. Calcular el factorial de un número – ejercicio19.cpp
cpp
Copiar código
#include <iostream>
using namespace std;

int main() {
    int n, f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        f *= i;
    cout << f;
    return 0;
}
✅ 20. Mostrar los primeros 10 múltiplos de 7 – ejercicio20.cpp
cpp
Copiar código
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++)
        cout << 7 * i << " ";
    return 0;
}



