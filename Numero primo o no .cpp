#include <iostream>

using namespace std;

int main() {
    int numero, divisores = 0;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "El número no es primo." << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cout << "El número " << numero << " es primo." << endl;
        } else {
            cout << "El número " << numero << " no es primo." << endl;
        }
    }

    return 0;
}
